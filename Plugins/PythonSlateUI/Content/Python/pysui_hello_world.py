"""
PythonSlateUI Hello World
=========================

Demonstrates creating UE UI entirely from Python using unreal module native syntax.
The PySUIBridge plugin fills the API gaps that prevent direct Python UI creation.

Usage: Run this script in UE editor via:
  - Output Log > Python console
  - File > Execute Python Script
  - py.exec pysui_hello_world.py

This example creates:
  1. A UserWidget container (via bridge - bypasses Abstract/BlueprintInternalUseOnly)
  2. A VerticalBox with Text, Button, Slider, CheckBox (via bridge - proper WidgetTree outer)
  3. Displays it in an editor tab (via bridge - wraps FGlobalTabmanager)
"""

import unreal


def get_editor_world():
    subsystem = unreal.get_editor_subsystem(unreal.UnrealEditorSubsystem)
    return subsystem.get_editor_world()


def create_hello_world_tab():
    bridge = unreal.PySUIBridge

    # 1. Create a UserWidget container
    world = get_editor_world()
    container = bridge.create_user_widget(world, unreal.PyUserWidget)
    if not container:
        unreal.log_error("Failed to create UserWidget")
        return

    # 2. Construct widgets within the WidgetTree
    vbox = bridge.construct_widget(container, unreal.VerticalBox)

    # Title text
    title = bridge.construct_widget(container, unreal.TextBlock)
    title.set_text("PythonSlateUI Hello World")
    title_slot = vbox.add_child_to_vertical_box(title)
    title_slot.set_padding(unreal.Margin(20.0, 20.0, 20.0, 10.0))
    title_slot.set_horizontal_alignment(unreal.HorizontalAlignment.H_ALIGN_CENTER)

    # Separator text
    separator = bridge.construct_widget(container, unreal.TextBlock)
    separator.set_text("---")
    sep_slot = vbox.add_child_to_vertical_box(separator)
    sep_slot.set_padding(unreal.Margin(20.0, 0.0, 20.0, 10.0))
    sep_slot.set_horizontal_alignment(unreal.HorizontalAlignment.H_ALIGN_CENTER)

    # Info text (will be updated by button click)
    info_text = bridge.construct_widget(container, unreal.TextBlock)
    info_text.set_text("Click the button below!")
    info_slot = vbox.add_child_to_vertical_box(info_text)
    info_slot.set_padding(unreal.Margin(20.0, 5.0, 20.0, 5.0))

    # Click counter
    click_count = [0]

    # Button
    button = bridge.construct_widget(container, unreal.Button)
    button_text = bridge.construct_widget(container, unreal.TextBlock)
    button_text.set_text("Click Me!")
    button.add_child(button_text)

    def on_button_clicked():
        click_count[0] += 1
        info_text.set_text("Button clicked {} time(s)!".format(click_count[0]))
        unreal.log("Button clicked! Count: {}".format(click_count[0]))

    button.on_clicked.add_callable(on_button_clicked)
    btn_slot = vbox.add_child_to_vertical_box(button)
    btn_slot.set_padding(unreal.Margin(20.0, 5.0, 20.0, 5.0))

    # Horizontal box with CheckBox + Label
    hbox = bridge.construct_widget(container, unreal.HorizontalBox)
    checkbox = bridge.construct_widget(container, unreal.CheckBox)
    cb_label = bridge.construct_widget(container, unreal.TextBlock)
    cb_label.set_text("Enable feature")

    hbox.add_child_to_horizontal_box(checkbox).set_padding(unreal.Margin(20.0, 5.0, 5.0, 5.0))
    hbox.add_child_to_horizontal_box(cb_label).set_padding(unreal.Margin(0.0, 5.0, 20.0, 5.0))

    def on_check_changed(is_checked):
        state = "ON" if is_checked else "OFF"
        cb_label.set_text("Feature is {}".format(state))
        unreal.log("CheckBox state: {}".format(state))

    checkbox.on_check_state_changed.add_callable(on_check_changed)
    vbox.add_child_to_vertical_box(hbox)

    # Slider
    slider_label = bridge.construct_widget(container, unreal.TextBlock)
    slider_label.set_text("Slider value: 0.50")
    sl_slot = vbox.add_child_to_vertical_box(slider_label)
    sl_slot.set_padding(unreal.Margin(20.0, 10.0, 20.0, 0.0))

    slider = bridge.construct_widget(container, unreal.Slider)
    slider.set_value(0.5)

    def on_slider_changed(value):
        slider_label.set_text("Slider value: {:.2f}".format(value))

    slider.on_value_changed.add_callable(on_slider_changed)
    s_slot = vbox.add_child_to_vertical_box(slider)
    s_slot.set_padding(unreal.Margin(20.0, 0.0, 20.0, 5.0))

    # ProgressBar
    progress = bridge.construct_widget(container, unreal.ProgressBar)
    progress.set_percent(0.75)
    p_slot = vbox.add_child_to_vertical_box(progress)
    p_slot.set_padding(unreal.Margin(20.0, 5.0, 20.0, 5.0))

    # TextInput (EditableTextBox)
    text_input = bridge.construct_widget(container, unreal.EditableTextBox)
    text_input.set_text("Type something here...")
    ti_slot = vbox.add_child_to_vertical_box(text_input)
    ti_slot.set_padding(unreal.Margin(20.0, 5.0, 20.0, 10.0))

    # 3. Set root widget
    bridge.set_root_widget(container, vbox)

    # 4. Display in editor tab
    bridge.register_editor_tab("PySUIHelloWorld", "PySUI Hello World", container)
    bridge.open_editor_tab("PySUIHelloWorld")

    unreal.log("PythonSlateUI Hello World tab opened!")

    # Keep references alive to prevent GC of Python callables
    global _pysui_refs
    _pysui_refs = {
        'container': container,
        'on_button_clicked': on_button_clicked,
        'on_check_changed': on_check_changed,
        'on_slider_changed': on_slider_changed,
    }


def close_hello_world_tab():
    bridge = unreal.PySUIBridge
    bridge.unregister_editor_tab("PySUIHelloWorld")
    global _pysui_refs
    _pysui_refs = None
    unreal.log("PythonSlateUI Hello World tab closed and cleaned up.")


# Auto-run when executed
create_hello_world_tab()

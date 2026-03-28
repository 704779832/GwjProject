"""
PythonSlateUI Window Example
=============================

Demonstrates creating a standalone OS window from Python.
The window hosts a UUserWidget with interactive controls.

Usage:
  import pysui_window_example
  pysui_window_example.open_settings_window()
  pysui_window_example.close_settings_window()
"""

import unreal


_window_id = None
_refs = None


def get_editor_world():
    subsystem = unreal.get_editor_subsystem(unreal.UnrealEditorSubsystem)
    return subsystem.get_editor_world()


def open_settings_window():
    global _window_id, _refs
    bridge = unreal.PySUIBridge

    world = get_editor_world()
    container = bridge.create_user_widget(world, unreal.PyUserWidget)
    if not container:
        unreal.log_error("Failed to create UserWidget")
        return

    vbox = bridge.construct_widget(container, unreal.VerticalBox)

    # Title
    title = bridge.construct_widget(container, unreal.TextBlock)
    title.set_text("Settings Window")
    slot = vbox.add_child_to_vertical_box(title)
    slot.set_padding(unreal.Margin(15.0, 15.0, 15.0, 10.0))
    slot.set_horizontal_alignment(unreal.HorizontalAlignment.H_ALIGN_CENTER)

    # Option 1: ComboBox
    combo_label = bridge.construct_widget(container, unreal.TextBlock)
    combo_label.set_text("Quality:")
    vbox.add_child_to_vertical_box(combo_label).set_padding(unreal.Margin(15.0, 5.0, 15.0, 2.0))

    combo = bridge.construct_widget(container, unreal.ComboBoxString)
    combo.add_option("Low")
    combo.add_option("Medium")
    combo.add_option("High")
    combo.add_option("Ultra")
    combo.set_selected_option("High")
    vbox.add_child_to_vertical_box(combo).set_padding(unreal.Margin(15.0, 0.0, 15.0, 5.0))

    def on_quality_changed(selected_item, selection_index):
        unreal.log("Quality changed to: {} (index: {})".format(selected_item, selection_index))

    combo.on_selection_changed.add_callable(on_quality_changed)

    # Option 2: Slider for FOV
    fov_label = bridge.construct_widget(container, unreal.TextBlock)
    fov_label.set_text("FOV: 90")
    vbox.add_child_to_vertical_box(fov_label).set_padding(unreal.Margin(15.0, 5.0, 15.0, 2.0))

    fov_slider = bridge.construct_widget(container, unreal.Slider)
    fov_slider.set_min_value(60.0)
    fov_slider.set_max_value(120.0)
    fov_slider.set_value(90.0)
    vbox.add_child_to_vertical_box(fov_slider).set_padding(unreal.Margin(15.0, 0.0, 15.0, 5.0))

    def on_fov_changed(value):
        fov_label.set_text("FOV: {:.0f}".format(value))

    fov_slider.on_value_changed.add_callable(on_fov_changed)

    # Option 3: CheckBoxes
    for opt_name in ["VSync", "Fullscreen", "Show FPS"]:
        hbox = bridge.construct_widget(container, unreal.HorizontalBox)
        cb = bridge.construct_widget(container, unreal.CheckBox)
        label = bridge.construct_widget(container, unreal.TextBlock)
        label.set_text(opt_name)
        hbox.add_child_to_horizontal_box(cb).set_padding(unreal.Margin(15.0, 3.0, 5.0, 3.0))
        hbox.add_child_to_horizontal_box(label).set_padding(unreal.Margin(0.0, 3.0, 15.0, 3.0))
        vbox.add_child_to_vertical_box(hbox)

    # Apply button
    apply_btn = bridge.construct_widget(container, unreal.Button)
    apply_text = bridge.construct_widget(container, unreal.TextBlock)
    apply_text.set_text("Apply Settings")
    apply_btn.add_child(apply_text)
    vbox.add_child_to_vertical_box(apply_btn).set_padding(unreal.Margin(15.0, 15.0, 15.0, 15.0))

    def on_apply():
        unreal.log("Settings applied!")

    apply_btn.on_clicked.add_callable(on_apply)

    bridge.set_root_widget(container, vbox)

    _window_id = bridge.open_window("Game Settings", container, 400.0, 500.0)
    unreal.log("Settings window opened with ID: {}".format(_window_id))

    _refs = {
        'container': container,
        'on_quality_changed': on_quality_changed,
        'on_fov_changed': on_fov_changed,
        'on_apply': on_apply,
    }


def close_settings_window():
    global _window_id, _refs
    if _window_id:
        unreal.PySUIBridge.close_window(_window_id)
        _window_id = None
    _refs = None
    unreal.log("Settings window closed.")

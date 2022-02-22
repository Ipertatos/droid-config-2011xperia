%package -n patterns-sailfish-device-adaptation-2011xperia
Summary: Jolla HW Adaptation 2011 Xperias
Requires: patterns-sailfish-device-configuration-common-2011xperia
Requires: patterns-sailfish-device-adaptation-hybris
#Requires: patterns-sailfish-device-adaptation-hybris-droid-vibrator
#Requires: jolla-ui-configuration-2011xperia

Requires: pulseaudio-modules-droid
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces

Requires: gstreamer1.0-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
Requires: usb-moded-defaults-android
Requires: usb-moded-developer-mode-android

# Extra useful modes not officially supported:
# working but careful with roaming!
Requires: usb-moded-connection-sharing-android-config

# from update13, this is needed explicitly
Requires: bluez-configs-sailfish
# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-plugin-encsfa

# Settings app needs this since update15
Requires: jolla-settings-layout

# For devices with working cellular modem:
#Requires: jolla-sailfish-cellular-apps
Requires: telepathy-ring

# For devices where test_gps eventually gets a fix:
Requires: geoclue-provider-hybris

# additional packages
Requires: zramswap

# Flashlight
Requires: jolla-settings-system-flashlight

# ffmemless vibrator
Requires: qt5-feedback-haptics-ffmemless

%description -n patterns-sailfish-device-adaptation-2011xperia
Pattern with packages for 2011 Xperias HW Adaptation

%files -n patterns-sailfish-device-adaptation-2011xperia

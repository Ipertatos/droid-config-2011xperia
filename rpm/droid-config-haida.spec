# These and other macros are documented in ../droid-configs-device/droid-configs.inc

%define device haida
%define vendor semc

%define vendor_pretty Sony Ericsson
%define device_pretty Xperia Neo V

%define dcd_path ./

# Adjust this for your device
%define pixel_ratio 0.88889

# We assume most devices will
%define have_modem 1

Provides: ofono-configs
Provides: sensord-configs

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-haida.inc
%include patterns/patterns-sailfish-device-configuration-haida.inc


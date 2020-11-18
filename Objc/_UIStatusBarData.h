//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSSet, _UIStatusBarDataActivityEntry, _UIStatusBarDataBackgroundActivityEntry, _UIStatusBarDataBatteryEntry, _UIStatusBarDataBluetoothEntry, _UIStatusBarDataBoolEntry, _UIStatusBarDataCellularEntry, _UIStatusBarDataEntry, _UIStatusBarDataIntegerEntry, _UIStatusBarDataLocationEntry, _UIStatusBarDataLockEntry, _UIStatusBarDataStringEntry, _UIStatusBarDataTetheringEntry, _UIStatusBarDataThermalEntry, _UIStatusBarDataVoiceControlEntry, _UIStatusBarDataWifiEntry;

@interface _UIStatusBarData : NSObject <NSCopying, NSSecureCoding>
{
    _UIStatusBarDataStringEntry *_timeEntry;
    _UIStatusBarDataStringEntry *_shortTimeEntry;
    _UIStatusBarDataStringEntry *_dateEntry;
    _UIStatusBarDataStringEntry *_personNameEntry;
    _UIStatusBarDataStringEntry *_deviceNameEntry;
    _UIStatusBarDataCellularEntry *_cellularEntry;
    _UIStatusBarDataCellularEntry *_secondaryCellularEntry;
    _UIStatusBarDataWifiEntry *_wifiEntry;
    _UIStatusBarDataBatteryEntry *_mainBatteryEntry;
    _UIStatusBarDataBluetoothEntry *_bluetoothEntry;
    _UIStatusBarDataThermalEntry *_thermalEntry;
    _UIStatusBarDataActivityEntry *_activityEntry;
    _UIStatusBarDataTetheringEntry *_tetheringEntry;
    _UIStatusBarDataLocationEntry *_locationEntry;
    _UIStatusBarDataLockEntry *_lockEntry;
    _UIStatusBarDataBoolEntry *_quietModeEntry;
    _UIStatusBarDataBoolEntry *_electronicTollCollectionEntry;
    _UIStatusBarDataBoolEntry *_radarEntry;
    _UIStatusBarDataEntry *_rotationLockEntry;
    _UIStatusBarDataEntry *_airplaneModeEntry;
    _UIStatusBarDataEntry *_ttyEntry;
    _UIStatusBarDataEntry *_nikeEntry;
    _UIStatusBarDataEntry *_assistantEntry;
    _UIStatusBarDataEntry *_studentEntry;
    _UIStatusBarDataEntry *_vpnEntry;
    _UIStatusBarDataEntry *_liquidDetectionEntry;
    _UIStatusBarDataVoiceControlEntry *_voiceControlEntry;
    _UIStatusBarDataEntry *_airPlayEntry;
    _UIStatusBarDataEntry *_carPlayEntry;
    _UIStatusBarDataEntry *_alarmEntry;
    _UIStatusBarDataIntegerEntry *_volumeEntry;
    _UIStatusBarDataBackgroundActivityEntry *_backgroundActivityEntry;
    _UIStatusBarDataStringEntry *_backNavigationEntry;
    _UIStatusBarDataStringEntry *_forwardNavigationEntry;
}

@property (copy, nonatomic) _UIStatusBarDataActivityEntry *activityEntry; // @synthesize activityEntry=_activityEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *airPlayEntry; // @synthesize airPlayEntry=_airPlayEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *airplaneModeEntry; // @synthesize airplaneModeEntry=_airplaneModeEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *alarmEntry; // @synthesize alarmEntry=_alarmEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *assistantEntry; // @synthesize assistantEntry=_assistantEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *backNavigationEntry; // @synthesize backNavigationEntry=_backNavigationEntry;
@property (copy, nonatomic) _UIStatusBarDataBackgroundActivityEntry *backgroundActivityEntry; // @synthesize backgroundActivityEntry=_backgroundActivityEntry;
@property (copy, nonatomic) _UIStatusBarDataBluetoothEntry *bluetoothEntry; // @synthesize bluetoothEntry=_bluetoothEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *carPlayEntry; // @synthesize carPlayEntry=_carPlayEntry;
@property (copy, nonatomic) _UIStatusBarDataCellularEntry *cellularEntry; // @synthesize cellularEntry=_cellularEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *dateEntry; // @synthesize dateEntry=_dateEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *deviceNameEntry; // @synthesize deviceNameEntry=_deviceNameEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *electronicTollCollectionEntry; // @synthesize electronicTollCollectionEntry=_electronicTollCollectionEntry;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSSet *existingEntryKeys;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *forwardNavigationEntry; // @synthesize forwardNavigationEntry=_forwardNavigationEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *liquidDetectionEntry; // @synthesize liquidDetectionEntry=_liquidDetectionEntry;
@property (copy, nonatomic) _UIStatusBarDataLocationEntry *locationEntry; // @synthesize locationEntry=_locationEntry;
@property (copy, nonatomic) _UIStatusBarDataLockEntry *lockEntry; // @synthesize lockEntry=_lockEntry;
@property (copy, nonatomic) _UIStatusBarDataBatteryEntry *mainBatteryEntry; // @synthesize mainBatteryEntry=_mainBatteryEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *nikeEntry; // @synthesize nikeEntry=_nikeEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *personNameEntry; // @synthesize personNameEntry=_personNameEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *quietModeEntry; // @synthesize quietModeEntry=_quietModeEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *radarEntry; // @synthesize radarEntry=_radarEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *rotationLockEntry; // @synthesize rotationLockEntry=_rotationLockEntry;
@property (copy, nonatomic) _UIStatusBarDataCellularEntry *secondaryCellularEntry; // @synthesize secondaryCellularEntry=_secondaryCellularEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *shortTimeEntry; // @synthesize shortTimeEntry=_shortTimeEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *studentEntry; // @synthesize studentEntry=_studentEntry;
@property (copy, nonatomic) _UIStatusBarDataTetheringEntry *tetheringEntry; // @synthesize tetheringEntry=_tetheringEntry;
@property (copy, nonatomic) _UIStatusBarDataThermalEntry *thermalEntry; // @synthesize thermalEntry=_thermalEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *timeEntry; // @synthesize timeEntry=_timeEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *ttyEntry; // @synthesize ttyEntry=_ttyEntry;
@property (copy, nonatomic) _UIStatusBarDataVoiceControlEntry *voiceControlEntry; // @synthesize voiceControlEntry=_voiceControlEntry;
@property (copy, nonatomic) _UIStatusBarDataIntegerEntry *volumeEntry; // @synthesize volumeEntry=_volumeEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *vpnEntry; // @synthesize vpnEntry=_vpnEntry;
@property (copy, nonatomic) _UIStatusBarDataWifiEntry *wifiEntry; // @synthesize wifiEntry=_wifiEntry;

+ (id)entryKeys;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_applyUpdate:(id)arg1 keys:(id)arg2;
- (void)applyUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataByApplyingOverlay:(id)arg1;
- (id)dataByApplyingUpdate:(id)arg1 keys:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)makeUpdateFromData:(id)arg1;
- (id)updateFromData:(id)arg1;

@end


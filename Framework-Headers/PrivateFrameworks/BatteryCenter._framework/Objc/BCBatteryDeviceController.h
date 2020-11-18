//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BCBatteryDeviceController : NSObject
{
    NSMutableDictionary *_devicesByIdentifier;
    NSArray *_sortedDevices;
    struct __CFRunLoopSource *_powerSourcesChangedRunLoopSource;
    struct __CFRunLoopSource *_accessoriesChangedRunLoopSource;
    struct __CFRunLoopSource *_accessoriesLimitedPowerRunLoopSource;
    NSMapTable *_handlersByIdentifier;
    BOOL _batterySaverModeActive;
    BOOL _chargeChangeHandlingDisabled;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _numFakeDevices;
}

@property (readonly, weak, nonatomic) NSArray *connectedDevices;
@property (readonly, nonatomic) NSString *connectedDevicesDidChangeNotificationName;

+ (id)_glyphForBatteryDevice:(id)arg1;
+ (id)_glyphForBatteryDeviceWithTransport:(long long)arg1 accessoryCategory:(unsigned long long)arg2 vendor:(long long)arg3 productIdentifier:(long long)arg4 parts:(unsigned long long)arg5;
+ (id)_internalBatteryDeviceGlyph;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)_accessoryCategoryFromPowerSourceAccessoryCategory:(id)arg1 partType:(unsigned long long)arg2 transportType:(long long)arg3 vendor:(long long)arg4 productIdentifier:(long long)arg5;
- (id)_deviceByCoalescingDevice:(id)arg1;
- (int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(BOOL)arg3;
- (id)_fakeDeviceA111PowerSourceDescription;
- (id)_fakeDeviceB222PowerSourceDescription;
- (id)_fakeDeviceB235PowerSourceDescription;
- (id)_fakeDeviceB244PowerSourceDescription;
- (id)_fakeDeviceB352PowerSourceDescription;
- (id)_fakeDeviceB443PowerSourceDescription;
- (id)_fakeDeviceBeatsHeadphones1PowerSourceDescription;
- (id)_fakeDeviceBeatsHeadphones2PowerSourceDescription;
- (id)_fakeDeviceInternalBatteryDescription;
- (id)_fakeDeviceLeftB188PowerSourceDescription;
- (id)_fakeDeviceLeftB282PowerSourceDescription;
- (id)_fakeDeviceLeftHearingAidPowerSourceDescription;
- (id)_fakeDevicePowerSourceDescriptions;
- (id)_fakeDeviceRightB188PowerSourceDescription;
- (id)_fakeDeviceRightB312PowerSourceDescription;
- (id)_fakeDeviceRightHearingAidPowerSourceDescription;
- (void)_handleBatterySaverModeChanged:(int)arg1;
- (void)_handlePSChange;
- (void)_incrementNumberOfConnectedDevices:(BOOL)arg1;
- (void)_incrementPercentChargeForConnectedDevices:(BOOL)arg1;
- (BOOL)_isDevicePartOfPair:(id)arg1;
- (struct CGSize)_largestBatteryDeviceGlyphSize;
- (long long)_lowBatteryLevelForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 transportType:(long long)arg3;
- (id)_nameForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 name:(id)arg3 partName:(id)arg4;
- (unsigned long long)_partFromPowerSourcePartIdentifier:(id)arg1;
- (void)_postDidChangeNotification;
- (long long)_powerSourceStateFromPowerSourceStateString:(id)arg1;
- (void)_queue_addDeviceChangeHandler:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (id)_queue_batteryDeviceWithIdentifier:(id)arg1;
- (void)_queue_callHandlersForDevice:(id)arg1;
- (id)_queue_connectedDevices;
- (void)_queue_handleBatterySaverModeChanged:(int)arg1;
- (void)_queue_handlePSChange;
- (void)_queue_invalidateConnectedDevices;
- (void)_queue_performUpdateWithPowerSourcesBlob:(void *)arg1 andPowerSourcesList:(struct __CFArray *)arg2;
- (void)_queue_removeBatteryDevicesWithIdentifiers:(id)arg1;
- (void)_queue_removeDeviceChangeHandlerWithIdentifier:(id)arg1;
- (void)_queue_setBatteryDevice:(id)arg1 forIdentifier:(id)arg2;
- (void)_reenableChargeChangeHandling;
- (BOOL)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(long long *)arg2;
- (BOOL)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1;
- (long long)_transportTypeFromPowerSourceTransportTypeString:(id)arg1;
- (long long)_vendorFromPowerSourceDescriptionVendorIdentifier:(id)arg1 transportType:(long long)arg2;
- (void)addDeviceChangeHandler:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (void)connectedDevicesWithResult:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)removeDeviceChangeHandlerWithIdentifier:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BluetoothDevice : NSObject
{
    NSString *_name;
    NSString *_productName;
    NSString *_address;
    struct BTDeviceImpl *_device;
    unsigned int _connectingServiceMask;
}

- (unsigned int)SendSetupCommand:(unsigned char)arg1;
- (void)_clearName;
- (BOOL)_isNameCached;
- (void)acceptSSP:(long long)arg1;
- (id)accessoryInfo;
- (int)accessorySettingFeatureBitMask;
- (id)aclUID;
- (id)address;
- (int)batteryLevel;
- (unsigned int)clickHoldMode:(int *)arg1 rightAction:(int *)arg2;
- (BOOL)cloudPaired;
- (long long)compare:(id)arg1;
- (void)connect;
- (void)connectWithServices:(unsigned int)arg1;
- (BOOL)connected;
- (unsigned long long)connectedServices;
- (unsigned long long)connectedServicesCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (struct BTDeviceImpl *)device;
- (void)disconnect;
- (int)doubleClickMode;
- (unsigned int)doubleTapAction;
- (unsigned int)doubleTapActionEx:(unsigned int *)arg1 rightAction:(unsigned int *)arg2;
- (unsigned int)doubleTapCapability;
- (void)endVoiceCommand;
- (BOOL)featureCapability:(int)arg1;
- (BOOL)getAACPCapabilityBit:(int)arg1;
- (id)getAACPCapabilityBits;
- (int)getBehaviorForHIDDevice;
- (unsigned int)getConnectingServiceMask;
- (int)getLowSecurityStatus;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (unsigned char)getSpatialAudioPlatformSupport;
- (BOOL)inEarDetectEnabled;
- (BOOL)inEarStatusPrimary:(int *)arg1 secondary:(int *)arg2;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;
- (BOOL)isAccessory;
- (BOOL)isAppleAudioDevice;
- (BOOL)isProController;
- (BOOL)isServiceSupported:(unsigned int)arg1;
- (BOOL)isTemporaryPaired;
- (unsigned int)listeningMode;
- (unsigned int)listeningModeConfigs;
- (BOOL)magicPaired;
- (unsigned int)majorClass;
- (unsigned int)micMode;
- (unsigned int)minorClass;
- (id)name;
- (BOOL)paired;
- (BOOL)pairedDeviceNameUpdated;
- (unsigned int)productId;
- (id)productName;
- (id)scoUID;
- (BOOL)setClickHoldMode:(int)arg1 rightMode:(int)arg2;
- (void)setConnectingServicemask:(unsigned int)arg1;
- (void)setDevice:(struct BTDeviceImpl *)arg1;
- (BOOL)setDoubleClickMode:(int)arg1;
- (BOOL)setDoubleTapAction:(unsigned int)arg1;
- (BOOL)setDoubleTapActionEx:(unsigned int)arg1 rightAction:(unsigned int)arg2;
- (BOOL)setInEarDetectEnabled:(BOOL)arg1;
- (BOOL)setListeningMode:(unsigned int)arg1;
- (BOOL)setListeningModeConfigs:(unsigned int)arg1;
- (BOOL)setMicMode:(unsigned int)arg1;
- (void)setPIN:(id)arg1;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (BOOL)setSingleClickMode:(int)arg1;
- (BOOL)setSmartRouteMode:(unsigned char)arg1;
- (void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2;
- (void)setSyncSettings:(CDStruct_df7f102b)arg1;
- (BOOL)setUserName:(id)arg1;
- (int)singleClickMode;
- (unsigned char)smartRouteMode;
- (void)startVoiceCommand;
- (BOOL)supportsBatteryLevel;
- (BOOL)supportsHS;
- (id)syncGroups;
- (CDStruct_df7f102b)syncSettings;
- (int)type;
- (void)unpair;
- (unsigned int)vendorId;

@end

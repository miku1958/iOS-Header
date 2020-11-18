//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BluetoothDevice : NSObject
{
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl *_device;
    unsigned int _connectingServiceMask;
}

- (void)_clearName;
- (BOOL)_isNameCached;
- (void)acceptSSP:(long long)arg1;
- (id)address;
- (int)batteryLevel;
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
- (unsigned int)doubleTapAction;
- (void)endVoiceCommand;
- (unsigned int)getConnectingServiceMask;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (BOOL)inEarDetectEnabled;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;
- (BOOL)isAccessory;
- (BOOL)isAppleAudioDevice;
- (BOOL)isServiceSupported:(unsigned int)arg1;
- (BOOL)magicPaired;
- (BOOL)magicPairedDeviceNameUpdated;
- (unsigned int)majorClass;
- (unsigned int)micMode;
- (unsigned int)minorClass;
- (id)name;
- (BOOL)paired;
- (unsigned int)productId;
- (id)scoUID;
- (void)setConnectingServicemask:(unsigned int)arg1;
- (void)setDevice:(struct BTDeviceImpl *)arg1;
- (BOOL)setDoubleTapAction:(unsigned int)arg1;
- (BOOL)setInEarDetectEnabled:(BOOL)arg1;
- (BOOL)setMicMode:(unsigned int)arg1;
- (void)setPIN:(id)arg1;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2;
- (void)setSyncSettings:(CDStruct_8024420c)arg1;
- (BOOL)setUserName:(id)arg1;
- (void)startVoiceCommand;
- (BOOL)supportsBatteryLevel;
- (id)syncGroups;
- (CDStruct_8024420c)syncSettings;
- (int)type;
- (void)unpair;
- (unsigned int)vendorId;

@end


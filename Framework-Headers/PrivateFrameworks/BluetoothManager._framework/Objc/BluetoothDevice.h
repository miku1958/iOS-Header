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
- (void)endVoiceCommand;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;
- (BOOL)isAccessory;
- (BOOL)isServiceSupported:(unsigned int)arg1;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (id)name;
- (BOOL)paired;
- (id)scoUID;
- (void)setDevice:(struct BTDeviceImpl *)arg1;
- (void)setPIN:(id)arg1;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2;
- (void)setSyncSettings:(CDStruct_8024420c)arg1;
- (void)startVoiceCommand;
- (BOOL)supportsBatteryLevel;
- (id)syncGroups;
- (CDStruct_8024420c)syncSettings;
- (int)type;
- (void)unpair;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol AVOutputDeviceImpl;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceInternal : NSObject
{
    id<AVOutputDeviceImpl> impl;
    NSString *name;
    NSString *ID;
    long long deviceType;
    long long deviceSubType;
    NSString *manufacturer;
    NSString *modelID;
    NSString *serialNumber;
    NSString *firmwareVersion;
    NSData *MACAddress;
    unsigned long long deviceFeatures;
}

@end


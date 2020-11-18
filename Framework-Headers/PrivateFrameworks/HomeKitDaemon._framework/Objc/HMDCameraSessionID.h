//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDDevice, NSString;

@interface HMDCameraSessionID : NSObject <NSCopying>
{
    BOOL _spiClient;
    NSString *_sessionID;
    NSString *_accessoryName;
    NSString *_descriptionString;
    NSString *_cameraSessionAppID;
    NSString *_cameraProactiveSessionID;
    HMDDevice *_remoteDevice;
}

@property (readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property (readonly, nonatomic) NSString *cameraProactiveSessionID; // @synthesize cameraProactiveSessionID=_cameraProactiveSessionID;
@property (readonly, nonatomic) NSString *cameraSessionAppID; // @synthesize cameraSessionAppID=_cameraSessionAppID;
@property (readonly, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property (readonly, nonatomic) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property (readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly, nonatomic, getter=isSPIClient) BOOL spiClient; // @synthesize spiClient=_spiClient;

- (void).cxx_destruct;
- (id)_createDescriptionString;
- (id)_extractSessionAppID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 sessionID:(id)arg3 message:(id)arg4;
- (id)initWithAccessory:(id)arg1 sessionID:(id)arg2 message:(id)arg3;
- (id)initWithAccessoryName:(id)arg1 sessionID:(id)arg2 cameraSessionAppID:(id)arg3 cameraProactiveSessionID:(id)arg4 remoteDevice:(id)arg5 spiClient:(BOOL)arg6;
- (BOOL)isEqual:(id)arg1;

@end

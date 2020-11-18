//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf, _MROriginProtobuf;

__attribute__((visibility("hidden")))
@interface MRExternalDevice : NSObject
{
    BOOL _valid;
    BOOL _usingSystemPairing;
    unsigned int _connectionState;
}

@property (readonly, nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
@property (readonly, nonatomic) _MROriginProtobuf *customOrigin;
@property (readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (readonly, nonatomic) NSString *hostName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing; // @synthesize usingSystemPairing=_usingSystemPairing;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property (nonatomic) BOOL wantsNowPlayingArtworkNotifications;
@property (nonatomic) BOOL wantsNowPlayingNotifications;
@property (nonatomic) BOOL wantsOutputDeviceNotifications;
@property (nonatomic) BOOL wantsVolumeNotifications;

- (id)_init;
- (void)connectWithOptions:(unsigned int)arg1;
- (id)currentClientUpdatesConfigMessage;
- (void)disconnect:(id)arg1;
- (id)errorForCurrentState;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;
- (void)sendClientUpdatesConfigMessage;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setVolumeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)unpair;

@end

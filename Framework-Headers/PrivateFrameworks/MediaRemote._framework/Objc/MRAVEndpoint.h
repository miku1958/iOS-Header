//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRAVOutputDevice, MRExternalDevice, NSArray, NSString, _MRAVEndpointDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface MRAVEndpoint : NSObject
{
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property (readonly, nonatomic) _MRAVEndpointDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) MRAVOutputDevice *designatedGroupLeader;
@property (readonly, nonatomic) MRExternalDevice *externalDevice;
@property (readonly, nonatomic) NSString *instanceIdentifier;
@property (readonly, nonatomic, getter=isLocalEndpoint) BOOL localEndpoint;
@property (strong, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *shortDescription;
@property (strong, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;
- (void)_connectToExternalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (id)_init;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 replyQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)_volumeControlMode;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)containsOutputDevice:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isVolumeControlAvailable;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setVolume:(float)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)volumeControlCapabilitiesWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)volumeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


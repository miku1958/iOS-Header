//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding>
{
    AVOutputContextInternal *_outputContext;
}

@property (readonly, nonatomic) NSString *deviceName;

+ (id)allOutputContextImplClasses;
+ (id)auxiliaryOutputContext;
+ (Class)defaultOutputContextImplClass;
+ (id)iTunesAudioContext;
+ (void)initialize;
+ (id)outputContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+ (id)outputContextForID:(id)arg1;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (BOOL)supportsSecureCoding;
- (id)ID;
- (void)addOutputDevice:(id)arg1;
- (void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)applicationProcessID;
- (id)associatedAudioDeviceID;
- (BOOL)canSetVolume;
- (id)communicationChannelDelegate;
- (id)contextID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)impl;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutputContextImpl:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)muteAllOutputDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)openCommunicationChannelWithOptions:(id)arg1 error:(id *)arg2;
- (id)outgoingCommunicationChannel;
- (void)outputContextImpl:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContextImpl:(id)arg1 didExpireWithReplacement:(id)arg2;
- (void)outputContextImpl:(id)arg1 didInitiateDestinationChange:(id)arg2;
- (void)outputContextImpl:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)outputContextImplDidChangeCanSetVolume:(id)arg1;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)arg1;
- (void)outputContextImplDidChangeOutputDevice:(id)arg1;
- (void)outputContextImplDidChangeOutputDevices:(id)arg1;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)arg1;
- (void)outputContextImplDidChangeVolume:(id)arg1;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)arg1;
- (id)outputContextType;
- (id)outputDevice;
- (unsigned long long)outputDeviceFeatures;
- (id)outputDevices;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(id)arg1;
- (void)setApplicationProcessID:(int)arg1;
- (void)setCommunicationChannelDelegate:(id)arg1;
- (BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;
- (void)setOutputDevice:(id)arg1 options:(id)arg2;
- (void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setOutputDevices:(id)arg1;
- (void)setVolume:(float)arg1;
- (BOOL)supportsMultipleOutputDevices;
- (float)volume;

@end


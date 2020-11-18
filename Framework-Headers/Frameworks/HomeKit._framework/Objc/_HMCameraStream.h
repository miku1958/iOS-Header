//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMCameraSource.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface _HMCameraStream : _HMCameraSource <HMFMessageReceiver>
{
    unsigned long long _audioStreamSetting;
    NSNumber *_audioVolume;
}

@property (nonatomic) unsigned long long audioStreamSetting; // @synthesize audioStreamSetting=_audioStreamSetting;
@property (strong, nonatomic) NSNumber *audioVolume; // @synthesize audioVolume=_audioVolume;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAudioStreamSettingUpdate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAudioVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 audioStreamSetting:(unsigned long long)arg6;
- (void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAudioVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


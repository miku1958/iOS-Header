//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/AVMediaDataRequesterConsumer-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRendering-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal-Protocol.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering>
{
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;
}

@property (copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (readonly, nonatomic) long long status;
@property (readonly) Class superclass;
@property (readonly, strong) struct OpaqueCMTimebase *timebase;

+ (id)sampleBufferAudioRenderer;
- (int)_initializeTimebase;
- (int)_installNotificationHandlers;
- (void)_transitionToFailedStatusWithOSStatus:(int)arg1;
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)_triggerMediaRequestCallback;
- (void)_uninstallNotificationHandlers;
- (void)_wasFlushedAutomaticallyAtTime:(CDStruct_1b6d18a9)arg1;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;
- (void)dealloc;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)flush;
- (void)flushFromSourceTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (BOOL)isMuted;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setMuted:(BOOL)arg1;
- (BOOL)setRenderSynchronizer:(id)arg1 error:(id *)arg2;
- (void)setSTSLabel:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)stopRequestingMediaData;
- (float)volume;

@end


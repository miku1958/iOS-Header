//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFAudio/AVAudioSessionParticipant-Protocol.h>

@class AVAudioFormat, AVAudioSession, NSArray, NSDictionary, NSURL;
@protocol AVAudioRecorderDelegate;

@interface AVAudioRecorder : NSObject <AVAudioSessionParticipant>
{
    void *_impl;
}

@property (strong) AVAudioSession *audioSession;
@property (copy, nonatomic) NSArray *channelAssignments;
@property (readonly) double currentTime;
@property id<AVAudioRecorderDelegate> delegate;
@property (readonly) double deviceCurrentTime;
@property (readonly) AVAudioFormat *format;
@property (nonatomic) BOOL instantaneousMetering;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (nonatomic) int processToTap;
@property (readonly, getter=isRecording) BOOL recording;
@property (readonly) NSDictionary *settings;
@property (readonly) NSURL *url;

- (float)averagePowerForChannel:(unsigned long long)arg1;
- (id)baseInit;
- (void)beginInterruption;
- (void)dealloc;
- (BOOL)deleteRecording;
- (void)endInterruption;
- (void)endInterruptionWithFlags;
- (void)finalize;
- (void)finishedRecording;
- (struct AudioRecorderImpl *)impl;
- (id)initWithURL:(id)arg1 format:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id *)arg3;
- (void)pause;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (BOOL)prepareToRecord;
- (void)privCommonCleanup;
- (void)privRemoveSessionPropertyListeners;
- (BOOL)record;
- (BOOL)recordAtTime:(double)arg1;
- (BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (BOOL)recordForDuration:(double)arg1;
- (void)stop;
- (void)updateMeters;

@end


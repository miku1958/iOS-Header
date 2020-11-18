//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSSpIdSpeakerRecognizer-Protocol.h>

@class NSDictionary, NSString;

@interface CSSpIdTrainingParallelRecorder : NSObject <CSSpIdSpeakerRecognizer>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *lastSpeakerIdInfo;
@property (readonly) Class superclass;

- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)processMyriadDecision:(unsigned long long)arg1;
- (void)recordingStoppedForReason:(long long)arg1;

@end


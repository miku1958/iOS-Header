//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class SSRVoiceActivityDetector;

@protocol SSRVoiceActivityDetectorDelegate <NSObject>

@optional
- (void)SSRVoiceActivityDetector:(SSRVoiceActivityDetector *)arg1 didDetectEndPointAt:(unsigned long long)arg2;
- (void)SSRVoiceActivityDetector:(SSRVoiceActivityDetector *)arg1 didDetectStartPointAt:(unsigned long long)arg2;
@end


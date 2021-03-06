//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASAudioAnalytics, SASRecognition, SAUIGetResponseAlternatives;

@interface SASSpeechRecognized : SABaseClientBoundCommand
{
}

@property (strong, nonatomic) SASAudioAnalytics *audioAnalytics;
@property (nonatomic) BOOL eager;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (strong, nonatomic) SASRecognition *recognition;
@property (strong, nonatomic) SAUIGetResponseAlternatives *responseAlternatives;
@property (copy, nonatomic) NSString *resultId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *title;

+ (id)speechRecognized;
+ (id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end


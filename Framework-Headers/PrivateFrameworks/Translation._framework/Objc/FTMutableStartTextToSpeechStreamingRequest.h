//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTStartTextToSpeechStreamingRequest.h>

@class FTTTSRequestFeatureFlags, FTTextToSpeechRequestContext, FTTextToSpeechRequestDebug, FTTextToSpeechRequestExperiment, FTTextToSpeechRequestMeta, FTTextToSpeechUserProfile, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableStartTextToSpeechStreamingRequest : FTStartTextToSpeechStreamingRequest
{
}

@property (nonatomic) long long audio_type;
@property (copy, nonatomic) FTTextToSpeechRequestContext *context;
@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) FTTextToSpeechRequestDebug *debug;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) FTTextToSpeechRequestExperiment *experiment;
@property (copy, nonatomic) FTTTSRequestFeatureFlags *feature_flags;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTTextToSpeechRequestMeta *meta_info;
@property (nonatomic) long long preferred_voice_type;
@property (copy, nonatomic) FTTextToSpeechUserProfile *profile;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voice_name;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


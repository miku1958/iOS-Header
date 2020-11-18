//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTErrorBlamerRequest.h>

@class FTStartSpeechRequest, FTUserAcousticProfile, FTUserLanguageProfile, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableErrorBlamerRequest : FTErrorBlamerRequest
{
}

@property (copy, nonatomic) NSArray *audio_packets;
@property (copy, nonatomic) NSArray *contextual_text;
@property (nonatomic) double latitude;
@property (copy, nonatomic) NSString *left_context;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *ref_transcript;
@property (copy, nonatomic) NSString *right_context;
@property (copy, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) FTUserAcousticProfile *user_acoustic_profile;
@property (copy, nonatomic) FTUserLanguageProfile *user_language_profile;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

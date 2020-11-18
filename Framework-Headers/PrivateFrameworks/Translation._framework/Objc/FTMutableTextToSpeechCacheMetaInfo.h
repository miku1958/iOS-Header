//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTTextToSpeechCacheMetaInfo.h>

@class FTAudioDescription, FTTextToSpeechMeta, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechCacheMetaInfo : FTTextToSpeechCacheMetaInfo
{
}

@property (nonatomic) int audio_length;
@property (nonatomic) long long audio_type;
@property (copy, nonatomic) FTAudioDescription *decoder_description;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property (copy, nonatomic) NSString *original_session_id;
@property (copy, nonatomic) FTAudioDescription *playback_description;
@property (copy, nonatomic) NSString *text;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

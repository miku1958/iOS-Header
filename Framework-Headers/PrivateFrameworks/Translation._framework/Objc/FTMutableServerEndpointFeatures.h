//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTServerEndpointFeatures.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableServerEndpointFeatures : FTServerEndpointFeatures
{
}

@property (nonatomic) double eos_likelihood;
@property (nonatomic) int num_of_words;
@property (copy, nonatomic) NSArray *pause_counts;
@property (nonatomic) int processed_audio_duration_ms;
@property (nonatomic) double silence_posterior;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *task_name;
@property (nonatomic) int trailing_silence_duration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

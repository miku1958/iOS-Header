//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTEndPointCandidate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableEndPointCandidate : FTEndPointCandidate
{
}

@property (nonatomic) int end_point_likelihood;
@property (nonatomic) int processed_audio_duration_ms;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTFinalTextToSpeechStreamingResponse.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableFinalTextToSpeechStreamingResponse : FTFinalTextToSpeechStreamingResponse
{
}

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) int total_pkt_number;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

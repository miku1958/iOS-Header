//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTTextNormalizationResponse.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTextNormalizationResponse : FTTextNormalizationResponse
{
}

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *tokens;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

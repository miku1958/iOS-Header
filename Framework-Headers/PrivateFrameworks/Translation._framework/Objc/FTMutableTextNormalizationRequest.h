//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTTextNormalizationRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTextNormalizationRequest : FTTextNormalizationRequest
{
}

@property (copy, nonatomic) NSString *language;
@property (nonatomic) int nbest_variants_max;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *text;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

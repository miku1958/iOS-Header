//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTBatchTranslationStreamingResponse.h>

@class FTBatchTranslationResponse, FTFinalBlazarResponse;

__attribute__((visibility("hidden")))
@interface FTMutableBatchTranslationStreamingResponse : FTBatchTranslationStreamingResponse
{
}

@property (copy, nonatomic) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (nonatomic) long long content_type;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


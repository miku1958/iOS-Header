//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTBatchTranslationResponse.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableBatchTranslationResponse : FTBatchTranslationResponse
{
}

@property (copy, nonatomic) NSString *paragraph_id;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSArray *span;
@property (copy, nonatomic) NSString *translated_text;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

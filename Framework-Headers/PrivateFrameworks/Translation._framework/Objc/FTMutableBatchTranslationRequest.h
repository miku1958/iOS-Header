//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTBatchTranslationRequest.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableBatchTranslationRequest : FTBatchTranslationRequest
{
}

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) long long opt_in_status;
@property (copy, nonatomic) NSArray *paragraphs;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSString *url;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTLmScorerRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableLmScorerRequest : FTLmScorerRequest
{
}

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *task_name;
@property (copy, nonatomic) NSString *transcript;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


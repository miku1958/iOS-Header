//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFCategoryJudgement : NSObject
{
    float score;
    long long category;
}

+ (id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2;
- (long long)category;
- (long long)compareByCategory:(id)arg1;
- (long long)compareByScore:(id)arg1;
- (id)description;
- (float)score;
- (void)setCategory:(long long)arg1;
- (void)setScore:(float)arg1;

@end


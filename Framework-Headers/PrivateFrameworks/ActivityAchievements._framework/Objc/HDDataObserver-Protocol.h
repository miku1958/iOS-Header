//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityAchievements/NSObject-Protocol.h>

@class HKSampleType, NSArray, NSNumber;

@protocol HDDataObserver <NSObject>
- (void)samplesAdded:(NSArray *)arg1 anchor:(NSNumber *)arg2;

@optional
- (void)samplesJournaled:(NSArray *)arg1 type:(HKSampleType *)arg2;
- (void)samplesOfTypesWereRemoved:(NSArray *)arg1 anchor:(NSNumber *)arg2;
@end


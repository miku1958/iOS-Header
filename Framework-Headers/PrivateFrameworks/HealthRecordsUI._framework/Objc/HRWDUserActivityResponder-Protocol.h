//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol HRWDUserActivityResponder;

@protocol HRWDUserActivityResponder <NSObject>
- (void)applyChangeActivity:(NSDictionary *)arg1;
- (id<HRWDUserActivityResponder>)applyTransitionActivity:(NSDictionary *)arg1;

@optional
- (NSString *)uniqueUserActivityType;
@end


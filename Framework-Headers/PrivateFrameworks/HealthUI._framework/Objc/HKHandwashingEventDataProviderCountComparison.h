//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataProviderValue-Protocol.h>

@class NSDate, NSString;

@interface HKHandwashingEventDataProviderCountComparison : NSObject <HKDataProviderValue>
{
    long long _completeCount;
    long long _totalCount;
    NSDate *_date;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3;
- (id)initWithCompleteCount:(long long)arg1 totalCount:(long long)arg2 date:(id)arg3;

@end


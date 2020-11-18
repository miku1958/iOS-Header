//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUOperation.h>

@class NSDate;

@interface MPUDelayOperation : MPUOperation
{
    double _interval;
    NSDate *_date;
}

+ (id)delayOperationUntilDate:(id)arg1;
+ (id)delayOperationWithInterval:(double)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)initWithInterval:(double)arg1 date:(id)arg2;

@end


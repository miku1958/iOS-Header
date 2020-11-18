//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;
@protocol OS_xpc_object;

@interface HDBackgroundTask : NSObject
{
    NSObject<OS_xpc_object> *_job;
}

@property (nonatomic) BOOL allowsPowerOptimizedScheduling;
@property (strong, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL shiftsDatesWithSystemClockChanges;
@property (strong, nonatomic) NSDate *startDate;
@property (strong, nonatomic) NSDictionary *userContext;

- (void).cxx_destruct;
- (id)_initWithJob:(id)arg1;
- (id)_job;
- (id)description;
- (id)init;
- (BOOL)taskExpired;
- (BOOL)taskSatisfied;
- (BOOL)taskValid;

@end


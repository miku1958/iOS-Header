//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDActivityCacheActiveSourceCalculator : NSObject
{
    vector_e4bf223f _workouts;
    vector_6dc0ebed _activationLogEntries;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct HDActivityCacheActiveSource)_baseActiveSource;
- (struct _HDActivityCacheActiveSourceCalculatorSourceEvent)_baseSourceEvent;
- (vector_6dc0ebed)createActiveSourceLog;
- (void)setActivationLogEntries:(vector_6dc0ebed *)arg1;
- (void)setWorkouts:(vector_e4bf223f *)arg1;

@end


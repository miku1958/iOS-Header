//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class REPeriodOfDayPredictor;

@protocol REPeriodOfDayPredictorDelegate <REPredictorObserver>

@optional
- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(REPeriodOfDayPredictor *)arg1;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(REPeriodOfDayPredictor *)arg1;
@end

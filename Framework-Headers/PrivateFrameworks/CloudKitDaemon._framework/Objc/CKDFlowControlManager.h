//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFlowControlManager : NSObject
{
    unsigned long long _defaultBudget;
    double _defaultRegeneration;
    double _maximumThrottleTime;
    NSMutableDictionary *_operationFlowControls;
}

@property (nonatomic) unsigned long long defaultBudget;
@property (nonatomic) double defaultRegeneration;
@property double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
@property (strong, nonatomic) NSMutableDictionary *operationFlowControls; // @synthesize operationFlowControls=_operationFlowControls;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (id)_flowControlForOperation:(id)arg1;
- (id)_flowControlForOperation:(id)arg1 createIfNecessary:(BOOL)arg2;
- (BOOL)checkFlowControlIsLimited:(id)arg1;
- (double)currentBudget:(id)arg1;
- (unsigned long long)currentBudgetCap:(id)arg1;
- (double)currentRegeneration:(id)arg1;
- (id)description;
- (BOOL)hasStatusToReport;
- (id)initWithDefaultBudget:(unsigned long long)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3;
- (double)secondsUntilFlowControlNotLimited:(id)arg1;
- (void)updateFlowControl:(id)arg1 withCost:(unsigned long long)arg2;
- (void)updateFlowControl:(id)arg1 withRetryAfter:(unsigned long long)arg2;
- (void)updateFlowControlWithLocalErrorForOperation:(id)arg1;

@end


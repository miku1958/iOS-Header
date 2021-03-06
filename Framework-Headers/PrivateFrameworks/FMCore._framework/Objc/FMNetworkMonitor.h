//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject
{
    NWPathEvaluator *_evaluator;
}

@property (strong, nonatomic) NWPathEvaluator *evaluator; // @synthesize evaluator=_evaluator;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)isMonitoring;
- (BOOL)isNetworkUp;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerNetworkMonitorLaunchEvent:(BOOL)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end


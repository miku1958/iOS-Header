//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface HFExecutionEnvironment : NSObject
{
    unsigned long long _runningState;
    NSHashTable *_observers;
}

@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly, nonatomic) unsigned long long runningState; // @synthesize runningState=_runningState;

+ (id)sharedInstance;
+ (id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dispatchMessageToObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)executionEnvironmentDidBecomeActive;
- (void)executionEnvironmentDidEnterBackground;
- (void)executionEnvironmentWillEnterForeground;
- (void)executionEnvironmentWillResignActive;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)setRunningState:(unsigned long long)arg1;

@end

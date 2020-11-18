//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@interface RTReachabilityManager : RTService
{
    struct __SCNetworkReachability *_reachabilityRef;
    long long _currentReachability;
}

@property (readonly, nonatomic) long long currentReachability; // @synthesize currentReachability=_currentReachability;
@property (nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;

+ (long long)_processReachabilityChange:(unsigned int)arg1;
+ (id)reachabilityToString:(long long)arg1;
- (void)_fetchCurrentReachability:(CDUnknownBlockType)arg1;
- (BOOL)_getCurrentReachability:(unsigned int *)arg1;
- (void)_shutdown;
- (void)_startMonitoringReachability;
- (void)_stopMonitoringReachability;
- (id)currentReachabilityString;
- (id)description;
- (void)fetchCurrentReachability:(CDUnknownBlockType)arg1;
- (id)init;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)processReachabilityChange:(unsigned int)arg1;
- (void)setCurrentReachability:(long long)arg1;

@end


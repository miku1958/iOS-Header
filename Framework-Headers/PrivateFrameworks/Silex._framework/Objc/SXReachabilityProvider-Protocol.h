//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXReachabilityObserver;

@protocol SXReachabilityProvider <NSObject>
- (void)addReachabilityObserver:(id<SXReachabilityObserver>)arg1;
- (BOOL)isNetworkReachable;
- (void)removeReachabilityObserver:(id<SXReachabilityObserver>)arg1;
@end


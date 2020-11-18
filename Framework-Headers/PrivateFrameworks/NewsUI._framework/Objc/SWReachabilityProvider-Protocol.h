//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol SWReachabilityObserver;

@protocol SWReachabilityProvider <NSObject>
- (void)addReachabilityObserver:(id<SWReachabilityObserver>)arg1;
- (BOOL)isNetworkReachable;
- (void)removeReachabilityObserver:(id<SWReachabilityObserver>)arg1;
@end

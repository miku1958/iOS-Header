//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol SXReachabilityObserver;

@protocol SXReachabilityProvider <NSObject>
- (void)addReachabilityObserver:(id<SXReachabilityObserver>)arg1;
- (BOOL)isNetworkReachable;
@end


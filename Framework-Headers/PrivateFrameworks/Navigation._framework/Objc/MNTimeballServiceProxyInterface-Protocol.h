//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNPlannedDestination, MNRouteUpdateFreshness, NSArray, NSUUID;
@protocol MNTimeballServiceProxyDelegate;

@protocol MNTimeballServiceProxyInterface <NSObject>

@property (nonatomic) id<MNTimeballServiceProxyDelegate> delegate;

- (void)requestRoutingOptions:(long long)arg1 forDestinations:(NSArray *)arg2 freshness:(MNRouteUpdateFreshness *)arg3 handlerID:(NSUUID *)arg4;
- (void)subscribeToAllDestinations;
- (void)subscribeToDestination:(MNPlannedDestination *)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
- (void)unsubscribeFromAllDestinations;
- (void)unsubscribeFromDestination:(MNPlannedDestination *)arg1;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNPlannedDestination, MNRouteUpdate, NSError, NSUUID;

@protocol MNTimeballServiceProxyDelegate <NSObject>
- (void)completedUpdateForHandlerID:(NSUUID *)arg1;
- (void)didReceiveError:(NSError *)arg1 forDestination:(MNPlannedDestination *)arg2;
- (void)didReceiveUpdate:(MNRouteUpdate *)arg1 forDestination:(MNPlannedDestination *)arg2;
- (void)invokeHandlerWithID:(NSUUID *)arg1 forDestination:(MNPlannedDestination *)arg2 update:(MNRouteUpdate *)arg3 error:(NSError *)arg4;
@end


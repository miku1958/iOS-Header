//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TURouteControllerXPCServer-Protocol.h>

@class NSDictionary;
@protocol TURouteControllerClient;

@protocol TURouteControllerActions <TURouteControllerXPCServer>

@property (strong, nonatomic) id<TURouteControllerClient> routeControllerClient;
@property (readonly, nonatomic) NSDictionary *routesByUniqueIdentifier;

@end


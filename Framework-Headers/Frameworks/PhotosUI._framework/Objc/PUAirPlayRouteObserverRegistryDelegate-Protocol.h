//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAirPlayRouteObserverRegistry;
@protocol PUAirPlayControllerRouteObserver;

@protocol PUAirPlayRouteObserverRegistryDelegate <NSObject>
- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(PUAirPlayRouteObserverRegistry *)arg1 forRouteObserver:(id<PUAirPlayControllerRouteObserver>)arg2;
@end


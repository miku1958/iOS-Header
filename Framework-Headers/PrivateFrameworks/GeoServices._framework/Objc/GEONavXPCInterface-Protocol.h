//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData;

@protocol GEONavXPCInterface
- (void)anticipatePreviewRoute:(NSData *)arg1 routeContext:(NSData *)arg2;
- (void)clearPreviewRoutesWithRouteContext:(NSData *)arg1;
- (void)updateNavigationRouteDetails:(NSData *)arg1 routeStatus:(NSData *)arg2 routeContext:(NSData *)arg3;
- (void)updateNavigationRouteStatus:(NSData *)arg1 routeContext:(NSData *)arg2;
- (void)updatePreviewRoutes:(NSArray *)arg1 expectedNumberOfRoutes:(unsigned long long)arg2 routeContext:(NSData *)arg3;
@end


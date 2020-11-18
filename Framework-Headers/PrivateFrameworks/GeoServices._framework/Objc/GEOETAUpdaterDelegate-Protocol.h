//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedETARoute, GEOComposedRoute, GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, GEOETAUpdater, NSArray, NSError;

@protocol GEOETAUpdaterDelegate <NSObject>
- (void)etaUpdater:(GEOETAUpdater *)arg1 receivedETATrafficUpdateResponse:(GEOETATrafficUpdateResponse *)arg2 etaRoute:(GEOComposedETARoute *)arg3;
- (void)etaUpdater:(GEOETAUpdater *)arg1 receivedError:(NSError *)arg2;
- (void)etaUpdater:(GEOETAUpdater *)arg1 willSendETATrafficUpdateRequest:(GEOETATrafficUpdateRequest *)arg2;
- (void)etaUpdaterReceivedInvalidRoute:(GEOETAUpdater *)arg1 newRoute:(GEOComposedRoute *)arg2 incidentsOnRoute:(NSArray *)arg3 incidentsOffRoute:(NSArray *)arg4;
- (void)etaUpdaterUpdatedETA:(GEOETAUpdater *)arg1;

@optional
- (void)etaUpdaterRequestCompleted:(GEOETAUpdater *)arg1;
@end

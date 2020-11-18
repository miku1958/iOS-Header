//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOETAUpdaterDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOETATrafficUpdateResponse, GEOETAUpdater, NSArray, NSMapTable, NSString;
@protocol MNETAManagerDelegate;

@interface MNETAManager : NSObject <GEOETAUpdaterDelegate>
{
    id<MNETAManagerDelegate> _delegate;
    GEOETAUpdater *_etaUpdater;
    NSArray *_routes;
    NSMapTable *_etaRoutesTable;
    double _requestInterval;
    double _debugInitialRequestDelay;
    GEOETATrafficUpdateResponse *_currentResponse;
    GEOApplicationAuditToken *_auditToken;
}

@property (strong, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (nonatomic) double debugBackgroundTimeWindow;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double debugInitialRequestDelay; // @synthesize debugInitialRequestDelay=_debugInitialRequestDelay;
@property (weak, nonatomic) id<MNETAManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property (strong, nonatomic) NSString *requestingAppIdentifier;
@property (strong, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_updateRouteWithETATrafficUpdateResponse:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3;
- (void)dealloc;
- (id)etaRouteForRoute:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (BOOL)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (id)initWithDestination:(id)arg1 routeAttributes:(id)arg2 tracePlayer:(id)arg3;
- (void)reset;
- (void)startUpdateRequests;
- (void)stopUpdateRequests;
- (void)updateUserLocation:(id)arg1 routeMatch:(id)arg2;

@end


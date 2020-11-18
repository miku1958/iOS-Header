//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/GEONavigationListenerDelegate-Protocol.h>
#import <PersonalizationPortraitInternals/PPQuickTypeServantProtocol-Protocol.h>

@class GEONavigationListener, NSString;
@protocol OS_dispatch_semaphore;

@interface PPQuickTypeNavigationServant : NSObject <PPQuickTypeServantProtocol, GEONavigationListenerDelegate>
{
    GEONavigationListener *_navigationListener;
    int _navigationState;
    NSString *_destinationName;
    NSString *_streetName;
    double _remainingTimeToDestination;
    double _remainingDistanceToDestination;
    NSObject<OS_dispatch_semaphore> *_stateSemaphore;
    NSObject<OS_dispatch_semaphore> *_streetSemaphore;
    NSObject<OS_dispatch_semaphore> *_summarySemaphore;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeNavigationListener;
- (void)_makeNavRequests;
- (void)_stopListeningToNavigationUpdate;
- (BOOL)_waitForState;
- (BOOL)_waitForStreet;
- (BOOL)_waitForSummary;
- (void)_warmUpFormatters;
- (void)dealloc;
- (id)init;
- (void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(CDStruct_c3b9c2ee)arg2;
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;

@end


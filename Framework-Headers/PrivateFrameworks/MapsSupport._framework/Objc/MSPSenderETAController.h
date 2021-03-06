//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPNavigationListenerDelegate-Protocol.h>
#import <MapsSupport/MSPSenderMessageStrategyDelegate-Protocol.h>
#import <MapsSupport/MSPSharedTripGroupSessionDelegate-Protocol.h>

@class MSPGroupSessionStorage, MSPNavigationListener, MSPSenderLiveStrategy, MSPSenderMessageStrategy, MSPSenderMinimalStrategy, MSPSharedTripGroupSession, MSPSharedTripRelay, MSPSharedTripStorageController, NSArray, NSMutableSet, NSString;
@protocol MSPSenderETAControllerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate>
{
    NSObject<OS_os_transaction> *_transaction;
    MSPNavigationListener *_navigationListener;
    NSMutableSet *_destinations;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripGroupSession *_groupSession;
    MSPSenderMinimalStrategy *_minimalSender;
    MSPSenderLiveStrategy *_liveSender;
    MSPSenderMessageStrategy *_messageSender;
    MSPGroupSessionStorage *_sessionStorage;
    MSPSharedTripStorageController *_storageController;
    NSObject<MSPSenderETAControllerDelegate> *_delegate;
}

@property (readonly, nonatomic) NSArray *activeHandles;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSPSenderETAControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanObjects;
- (void)_createGroupSessionIfNeededWithIdentifier:(id)arg1;
- (void)_invalidateActiveHandles;
- (void)_invalidateSharedTripWithError:(id)arg1;
- (void)_restoreLastSession;
- (void)_sendFinishedToIdentifiers:(id)arg1;
- (void)_startNavigationListener;
- (void)_startingGroupSession;
- (void)_stopNavigationListener;
- (void)_updateStorage;
- (BOOL)_validateNavigationState:(id *)arg1;
- (void)dealloc;
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)groupSessionEnded:(id)arg1 withError:(id)arg2;
- (id)initWithRelay:(id)arg1;
- (void)navigationListener:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationListenerArrived:(id)arg1;
- (void)navigationListenerDestinationUpdated:(id)arg1;
- (void)navigationListenerETAUpdated:(id)arg1;
- (void)navigationListenerIsReady:(id)arg1;
- (void)navigationListenerRouteUpdated:(id)arg1;
- (void)navigationListenerStopped:(id)arg1;
- (void)navigationListenerTrafficUpdated:(id)arg1;
- (id)rulesForParticipant:(id)arg1;
- (BOOL)startSharingWith:(id)arg1 error:(id *)arg2;
- (BOOL)startSharingWithGroup:(id)arg1 error:(id *)arg2;
- (BOOL)startSharingWithMessages:(id)arg1 error:(id *)arg2;
- (void)stopSharing;
- (void)stopSharingWith:(id)arg1;
- (void)stopSharingWithGroup:(id)arg1;
- (void)stopSharingWithMessages:(id)arg1;
- (void)touchedRules;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPSharedTripRelayDelegate-Protocol.h>
#import <MapsSupport/MSPSharedTripStorageDelegate-Protocol.h>

@class MSPSharedTripBlacklist, MSPSharedTripRelay, MapsNotificationCenter, NSArray, NSMutableDictionary, NSString, NSTimer;
@protocol MSPReceiverETAControllerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPReceiverETAController : NSObject <MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate>
{
    NSObject<OS_os_transaction> *_transaction;
    NSMutableDictionary *_sharedSessions;
    NSMutableDictionary *_sharedNavStates;
    NSMutableDictionary *_temporaryNavStates;
    MapsNotificationCenter *_mapsNotificationCenter;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripBlacklist *_blockedList;
    NSTimer *_cleanupTimer;
    id<MSPReceiverETAControllerDelegate> _delegate;
}

@property (readonly, nonatomic) NSArray *allTrips;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MSPReceiverETAControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;
- (void)_cleanGroup:(id)arg1;
- (BOOL)_cleanUpNecessaryForGroup:(id)arg1;
- (void)_cleanupIfNecessary;
- (void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setNotificationCenter:(id)arg1;
- (void)_showOrUpdateNotificationIfNeeded:(id)arg1;
- (void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;
- (void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(BOOL)arg3;
- (void)blockSharedTrip:(id)arg1;
- (void)cleanTimer;
- (void)dealloc;
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)groupSessionEnded:(id)arg1;
- (id)initWithRelay:(id)arg1;
- (void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4;
- (void)relay:(id)arg1 sharingClosed:(id)arg2;
- (void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2;
- (BOOL)subscribeToUpdatesToSharedTrip:(id)arg1 error:(id *)arg2;
- (BOOL)unsubscribeFromUpdatesToSharedTrip:(id)arg1 error:(id *)arg2;
- (void)updateContacts;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPContainerPersister.h>

#import <MapsSupport/MSPMapsPushDaemonProxyObserver-Protocol.h>

@class NSString, NSUUID;

@interface MSPRemoteHistoryContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver>
{
    NSUUID *_lastOperationIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reportErrorIfAny:(id)arg1 purpose:(id)arg2;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)favoritesDidChange;
- (void)fetchContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchStateSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)historyDidChange;
- (id)init;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;

@end


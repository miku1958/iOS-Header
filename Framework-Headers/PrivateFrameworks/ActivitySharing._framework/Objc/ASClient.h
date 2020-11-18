//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/_HKXPCExportable-Protocol.h>

@class HKPluginProxyProvider, NSString;
@protocol ASServerInterface, OS_dispatch_queue;

@interface ASClient : NSObject <_HKXPCExportable>
{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<ASServerInterface> _serverProxy;
    HKPluginProxyProvider *_pluginProxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (CDUnknownBlockType)_clientQueueSuccessCompletion:(CDUnknownBlockType)arg1;
- (void)_remoteProxy:(CDUnknownBlockType)arg1;
- (void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearFriendListWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectionInvalidated;
- (void)expireChangeTokenWithCompletion:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)friendWithRemoteUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithHealthStore:(id)arg1;
- (void)pushActivityDataToAllFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteInterface;
- (void)removeFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


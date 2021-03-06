//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncRapportStorage.h>

#import <CoreDuet/_DKSyncRemoteContextStorage-Protocol.h>

@protocol _DKSyncRemoteContextStorageDelegate;

@interface _DKSyncRapportContextStorage : _DKSyncRapportStorage <_DKSyncRemoteContextStorage>
{
    id<_DKSyncRemoteContextStorageDelegate> _delegate;
}

@property (strong, nonatomic) id<_DKSyncRemoteContextStorageDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerRequestIDsWithClient:(id)arg1;
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;

@end


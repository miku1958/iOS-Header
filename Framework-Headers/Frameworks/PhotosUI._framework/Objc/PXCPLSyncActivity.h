//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSObject, NSProgress;
@protocol OS_dispatch_queue;

@interface PXCPLSyncActivity : PXObservable
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _syncProgressState;
    id _syncProgressSubscriber;
    NSProgress *_syncProgress;
    BOOL _isSyncing;
}

@property (readonly, nonatomic) BOOL isSyncing; // @synthesize isSyncing=_isSyncing;

- (void).cxx_destruct;
- (void)_queue_subscribeToSyncProgress;
- (void)_setSyncProgress:(id)arg1;
- (void)_setSyncProgressState:(unsigned long long)arg1;
- (void)_unsubscribeFromSyncProgress;
- (void)_updateIsSyncing;
- (void)_updateSyncProgressState;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setIsSyncing:(BOOL)arg1;

@end

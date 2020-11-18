//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, PLBBPendingBulletinsBatchDelegate;

@interface PLBBPendingBulletinsBatch : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableArray *_pendingBulletins;
    NSObject<OS_dispatch_source> *_coalescingTimerSource;
    NSObject<OS_dispatch_source> *_downloadTimerSource;
    int _currentState;
    BOOL _downloadTimerExpired;
    id<PLBBPendingBulletinsBatchDelegate> _delegate;
}

@property (readonly) BOOL canAcceptMergeBulletins;
@property (readonly) BOOL canAcceptNewBulletins;
@property id<PLBBPendingBulletinsBatchDelegate> delegate; // @synthesize delegate=_delegate;

- (void)_cancelCoalescingTimer;
- (void)_cancelDownloadTimer;
- (void)_evaluateAndProcessPendingBulletins;
- (void)_scheduleEvaluatePendingBulletins;
- (void)_startDownloadTimer;
- (void)_trackCompletionPercentageForState:(int)arg1;
- (void)_transitionToStateForEvent:(int)arg1;
- (BOOL)addBulletin:(id)arg1 forMergeOnly:(BOOL)arg2;
- (void)dealloc;
- (id)initWithIsolationQueue:(id)arg1;
- (void)noteAssetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
- (void)removeBulletinsWithAlbumUUID:(id)arg1 bulletinTypes:(id)arg2;
- (void)removeBulletinsWithAssetUUID:(id)arg1 deleteCommentsOrLikesBulletin:(BOOL)arg2 deletePhotosAddedToAlbumBulletin:(BOOL)arg3;

@end


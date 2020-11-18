//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCDPCItem, NSCache, NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MCDPCModel : NSObject
{
    NSMapTable *_identifiersToItems;
    NSObject<OS_dispatch_group> *_mediaRemoteGroup;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
    NSObject<OS_dispatch_queue> *_mediaRemoteNotificationQueue;
    NSObject<OS_dispatch_queue> *_imageProcessingQueue;
    unsigned long long _nextAllowedInvalidate;
    unsigned long long _nextAllowedUpdate;
    NSMutableSet *_updatedItems;
    NSCache *_resizedImages;
    BOOL _needsInvalidation;
    NSString *_bundleID;
    MCDPCItem *_rootItem;
    struct CGSize _imageSize;
}

@property (readonly, nonatomic) NSString *appTitle;
@property (readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (readonly, nonatomic) MCDPCItem *rootItem; // @synthesize rootItem=_rootItem;

- (void).cxx_destruct;
- (void)_beginMediaRemoteAccess;
- (void)_contentItemsUpdated:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_endMediaRemoteAccess;
- (void)_finishLoadingNotification:(id)arg1;
- (void)_mediaRemoteCommunicationWithIndexPath:(id)arg1 work:(CDUnknownBlockType)arg2;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_performMediaRemoteAccess:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_playbackInitiatedNotification:(id)arg1;
- (void)_populateImageForItem:(id)arg1;
- (void)_registerNotifications;
- (id)containerForRoot;
- (void)dealloc;
- (void)getChildrenAtIndexPath:(id)arg1 inRange:(struct _NSRange)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getItemAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getNowPlayingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRemoteAppIsPlaying:(CDUnknownBlockType)arg1;
- (id)imageForIdentifier:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)itemsFromMRContentItems:(id)arg1;

@end


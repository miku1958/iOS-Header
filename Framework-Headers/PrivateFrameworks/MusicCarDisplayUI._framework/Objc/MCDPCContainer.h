//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCDPCItem, MCDPCModel, NSIndexPath, NSMutableDictionary, NSString;
@protocol MCDPCContainerDelegate, OS_dispatch_queue;

@interface MCDPCContainer : NSObject
{
    NSString *_identifier;
    NSIndexPath *_indexPath;
    MCDPCItem *_rootItem;
    MCDPCModel *_model;
    BOOL _showPlaybackProgress;
    struct {
        unsigned int didInvalidateRootItem:1;
        unsigned int didInvalidateIndicies:1;
        unsigned int willChangeCount:1;
        unsigned int didChangeCount:1;
    } __supportedDelegateCalls;
    long long _cachedCount;
    id<MCDPCContainerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialAccessContainerQueue;
    NSMutableDictionary *_cachedIndiciesByIdentifier;
    NSMutableDictionary *_cachedItemsByIndicies;
}

@property (readonly, nonatomic) NSString *appTitle;
@property (nonatomic) long long cachedCount; // @synthesize cachedCount=_cachedCount;
@property (strong, nonatomic) NSMutableDictionary *cachedIndiciesByIdentifier; // @synthesize cachedIndiciesByIdentifier=_cachedIndiciesByIdentifier;
@property (strong, nonatomic) NSMutableDictionary *cachedItemsByIndicies; // @synthesize cachedItemsByIndicies=_cachedItemsByIndicies;
@property (weak, nonatomic) id<MCDPCContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (readonly, weak, nonatomic) MCDPCModel *model; // @synthesize model=_model;
@property (readonly, weak, nonatomic) MCDPCItem *rootItem; // @synthesize rootItem=_rootItem;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialAccessContainerQueue; // @synthesize serialAccessContainerQueue=_serialAccessContainerQueue;
@property (readonly, nonatomic) long long showCurrentlyPlayingIndex;
@property (readonly, nonatomic) BOOL showPlaybackProgress; // @synthesize showPlaybackProgress=_showPlaybackProgress;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)_contentItemsUpdated:(id)arg1;
- (id)_initWithModel:(id)arg1 rootItem:(id)arg2 indexPath:(id)arg3;
- (void)_nowPlayingIdentifiersDidChange:(id)arg1;
- (void)beginLoadingItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginLoadingItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)cachedIndexByIdentifier:(id)arg1;
- (id)cachedItemForIdentifier:(id)arg1;
- (id)cachedItemForIndex:(long long)arg1;
- (id)containerAtIndex:(long long)arg1;
- (id)containerForItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)fetchContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)getChildrenInRange:(struct _NSRange)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCountOfChildrenWithCompletion:(CDUnknownBlockType)arg1;
- (void)getNowPlayingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPlaybackProgressSupportForChildrenWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (BOOL)isValidForRefreshedParent:(id)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCount:(long long)arg1;
- (void)setShowPlaybackProgress:(BOOL)arg1;
- (void)updateRootItemWithCompletion:(CDUnknownBlockType)arg1;

@end


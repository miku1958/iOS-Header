//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTStickerBackendDelegate-Protocol.h>
#import <AvatarUI/AVTStickerRecentsOverlayDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>

@class AVTClippableImageStore, AVTSerialTaskScheduler, AVTStickerConfigurationProvider, AVTStickerGenerator, AVTStickerRecentsLayout, AVTStickerRecentsMigrator, AVTStickerRecentsOverlayView, AVTUIEnvironment, AVTUIStickerGeneratorPool, CALayer, NSArray, NSObject, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol AVTAvatarRecord, AVTAvatarStoreInternal, AVTResourceCache, AVTStickerRecentsItem, AVTStickerRecentsViewControllerDelegate, NSObject, OS_dispatch_queue;

@interface AVTStickerRecentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTStickerBackendDelegate, AVTStickerRecentsOverlayDelegate>
{
    BOOL _hasFetchedDefaultMemoji;
    BOOL _showPrereleaseSticker;
    id<AVTStickerRecentsViewControllerDelegate> _delegate;
    AVTStickerRecentsMigrator *_stickerRecentsMigrator;
    AVTStickerRecentsOverlayView *_overlayView;
    id<NSObject> _avatarStoreChangeObserver;
    id<AVTAvatarRecord> _defaultMemoji;
    AVTClippableImageStore *_imageStore;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    id<AVTAvatarStoreInternal> _avatarStore;
    AVTUIEnvironment *_environment;
    id<AVTResourceCache> _cache;
    AVTStickerGenerator *_stickerGenerator;
    NSObject<OS_dispatch_queue> *_recentsWorkQueue;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    AVTStickerConfigurationProvider *_configurationProvider;
    AVTSerialTaskScheduler *_taskScheduler;
    AVTUIStickerGeneratorPool *_generatorPool;
    AVTStickerRecentsLayout *_stickerRecentsLayout;
    id<AVTStickerRecentsItem> _buttonItem;
    NSArray *_stickerItems;
    NSArray *_displayItems;
    CALayer *_edgeMaskLayer;
}

@property (readonly, nonatomic) id<AVTAvatarStoreInternal> avatarStore; // @synthesize avatarStore=_avatarStore;
@property (strong, nonatomic) id<NSObject> avatarStoreChangeObserver; // @synthesize avatarStoreChangeObserver=_avatarStoreChangeObserver;
@property (strong, nonatomic) id<AVTStickerRecentsItem> buttonItem; // @synthesize buttonItem=_buttonItem;
@property (readonly, nonatomic) id<AVTResourceCache> cache; // @synthesize cache=_cache;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property (strong, nonatomic) AVTStickerConfigurationProvider *configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<AVTAvatarRecord> defaultMemoji; // @synthesize defaultMemoji=_defaultMemoji;
@property (weak, nonatomic) id<AVTStickerRecentsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property (strong, nonatomic) CALayer *edgeMaskLayer; // @synthesize edgeMaskLayer=_edgeMaskLayer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue; // @synthesize encodingQueue=_encodingQueue;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property (strong, nonatomic) AVTUIStickerGeneratorPool *generatorPool; // @synthesize generatorPool=_generatorPool;
@property (nonatomic) BOOL hasFetchedDefaultMemoji; // @synthesize hasFetchedDefaultMemoji=_hasFetchedDefaultMemoji;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AVTClippableImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property (strong, nonatomic) AVTStickerRecentsOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *recentsWorkQueue; // @synthesize recentsWorkQueue=_recentsWorkQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property (nonatomic) BOOL showPrereleaseSticker; // @synthesize showPrereleaseSticker=_showPrereleaseSticker;
@property (readonly, nonatomic) AVTStickerGenerator *stickerGenerator; // @synthesize stickerGenerator=_stickerGenerator;
@property (strong, nonatomic) NSArray *stickerItems; // @synthesize stickerItems=_stickerItems;
@property (readonly, nonatomic) AVTStickerRecentsLayout *stickerRecentsLayout; // @synthesize stickerRecentsLayout=_stickerRecentsLayout;
@property (strong, nonatomic) AVTStickerRecentsMigrator *stickerRecentsMigrator; // @synthesize stickerRecentsMigrator=_stickerRecentsMigrator;
@property (readonly) Class superclass;
@property (strong, nonatomic) AVTSerialTaskScheduler *taskScheduler; // @synthesize taskScheduler=_taskScheduler;

+ (id)imageStoreWithEnvironment:(id)arg1;
+ (id)layoutForSize:(struct CGSize)arg1;
+ (id)stickerCacheWithEnvironment:(id)arg1;
+ (id)stickerForRecentItem:(id)arg1;
+ (id)stickerRecentsController;
+ (id)stickerRecentsControllerForStore:(id)arg1;
- (void).cxx_destruct;
- (void)beginObservingAvatarStoreChanges;
- (void)buildRecentsItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)determineOverlayTypeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissOverlayViewAnimated:(BOOL)arg1;
- (struct UIEdgeInsets)edgeInsetsForContainerSize:(struct CGSize)arg1;
- (void)endObservingAvatarStoreChanges;
- (void)fetchDefaultMemojiIfNeeded;
- (id)initWithAvatarStore:(id)arg1 environment:(id)arg2;
- (void)overlayDidTapCloseButton:(id)arg1;
- (void)overlayDidTapContentView:(id)arg1;
- (void)overlayDidTapContinueButton:(id)arg1;
- (id)placeholderItems;
- (void)recentStickersDidChange:(id)arg1;
- (id)recentStickersWithCount:(long long)arg1;
- (void)setupRenderingDependentPieces;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDisplayItems;
- (void)updateItemSizeForContainerSize:(struct CGSize)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end


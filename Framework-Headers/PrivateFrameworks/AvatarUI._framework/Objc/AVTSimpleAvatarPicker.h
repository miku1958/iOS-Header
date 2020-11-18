//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarActionsViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarEditorViewControllerDelegate-Protocol.h>
#import <AvatarUI/AVTAvatarPicker-Protocol.h>
#import <AvatarUI/AVTNotifyingContainerViewDelegate-Protocol.h>
#import <AvatarUI/AVTObjectViewController-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVTAvatarPickerDataSource, AVTEdgeDisappearingCollectionViewLayout, AVTImageStore, AVTRenderingScope, AVTSimpleAvatarPickerHeaderView, AVTViewSessionProvider, NSMutableDictionary, NSString, UICollectionView, UIView, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarPickerDelegate, AVTPresenterDelegate, AVTTaskScheduler;

@interface AVTSimpleAvatarPicker : NSObject <AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsViewControllerDelegate, AVTNotifyingContainerViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTObjectViewController, AVTAvatarPicker>
{
    BOOL _allowEditing;
    id<AVTPresenterDelegate> presenterDelegate;
    id<AVTAvatarPickerDelegate> avatarPickerDelegate;
    double _minimumInteritemSpacing;
    UIView *_view;
    UICollectionView *_collectionView;
    AVTEdgeDisappearingCollectionViewLayout *_collectionViewLayout;
    AVTAvatarPickerDataSource *_dataSource;
    AVTImageStore *_imageStore;
    NSMutableDictionary *_itemsToTasksMap;
    id<AVTTaskScheduler> _scheduler;
    _AVTAvatarRecordImageProvider *_imageProvider;
    AVTViewSessionProvider *_viewSessionProvider;
    AVTRenderingScope *_renderingScope;
    AVTSimpleAvatarPickerHeaderView *_headerView;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) BOOL allowEditing; // @synthesize allowEditing=_allowEditing;
@property (weak, nonatomic) id<AVTAvatarPickerDelegate> avatarPickerDelegate; // @synthesize avatarPickerDelegate;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) AVTEdgeDisappearingCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (strong, nonatomic) AVTAvatarPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) AVTSimpleAvatarPickerHeaderView *headerView; // @synthesize headerView=_headerView;
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property (strong, nonatomic) AVTImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property (strong, nonatomic) NSMutableDictionary *itemsToTasksMap; // @synthesize itemsToTasksMap=_itemsToTasksMap;
@property (nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
@property (readonly, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property (readonly, nonatomic) id<AVTTaskScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;
@property (readonly, nonatomic) AVTViewSessionProvider *viewSessionProvider; // @synthesize viewSessionProvider=_viewSessionProvider;

- (void).cxx_destruct;
- (id)actionsModelForRecord:(id)arg1;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (BOOL)canCreateAvatar;
- (void)cancelCurrentRenderingTaskForRecordItem:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)currentCellForRecordItem:(id)arg1 atIndexPath:(id)arg2 displaySessionUUID:(id)arg3 previousCell:(id)arg4;
- (CDUnknownBlockType)currentRenderingTaskForRecordItem:(id)arg1;
- (void)deselectPreviousSelectedItemExcludingIndexPath:(id)arg1;
- (void)headerViewButtonPressed;
- (long long)indexForSelectedAvatar;
- (id)initWithDataSource:(id)arg1 recordImageProvider:(id)arg2 scheduler:(id)arg3 allowEditing:(BOOL)arg4;
- (id)initWithStore:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3;
- (BOOL)isItemAtIndexPathOffscreen:(id)arg1;
- (struct CGSize)itemSize;
- (void)loadView;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)presentActionsForAvatarForPPT:(id)arg1;
- (void)presentActionsForAvatarRecord:(id)arg1;
- (void)presentMemojiEditorForCreation;
- (void)registerRenderingTask:(CDUnknownBlockType)arg1 forRecordItem:(id)arg2;
- (void)reloadData;
- (void)reloadDataSource;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)selectedAvatar;
- (BOOL)shouldShowHeaderButton;
- (void)unregisterCurrentRenderingTaskForRecordItem:(id)arg1;
- (void)updateHeaderButtonForSelectedAvatar:(id)arg1 invalidateLayout:(BOOL)arg2 animated:(BOOL)arg3;
- (id)viewForAddItem;
- (void)wrapAndPresentViewController:(id)arg1 animated:(BOOL)arg2;

@end

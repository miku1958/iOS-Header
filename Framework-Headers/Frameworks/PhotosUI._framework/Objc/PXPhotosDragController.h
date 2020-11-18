//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetCollectionActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXLocalDragSessionDelegate-Protocol.h>
#import <PhotosUICore/UIDragInteractionDelegate-Protocol.h>
#import <PhotosUICore/UIDropInteractionDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, PXAssetCollectionActionManager, PXAssetReference, PXSectionedSelectionManager, PXUpdater, UIView, UIViewController, _UIDragSnappingFeedbackGenerator;
@protocol PXPhotosDragControllerDelegate;

@interface PXPhotosDragController : NSObject <PXChangeObserver, UIDragInteractionDelegate, UIDropInteractionDelegate, PXAssetCollectionActionPerformerDelegate, PXLocalDragSessionDelegate>
{
    BOOL _isDragSessionActive;
    BOOL _isUpdatingExcludedAssets;
    BOOL _reorderFeedbackEnabled;
    UIView *_contentView;
    PXSectionedSelectionManager *_selectionManager;
    PXAssetCollectionActionManager *_assetCollectionActionManager;
    id<PXPhotosDragControllerDelegate> _delegate;
    NSSet *_draggedAssetReferences;
    PXAssetReference *_dropTargetAssetReference;
    PXUpdater *_updater;
    NSMutableSet *_localDragSessions;
    _UIDragSnappingFeedbackGenerator *_reorderFeedbackGenerator;
    NSSet *_excludedAssets;
    PXAssetReference *_hitAssetReference;
}

@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // @synthesize assetCollectionActionManager=_assetCollectionActionManager;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<PXPhotosDragControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *draggedAssetReferences; // @synthesize draggedAssetReferences=_draggedAssetReferences;
@property (strong, nonatomic) PXAssetReference *dropTargetAssetReference; // @synthesize dropTargetAssetReference=_dropTargetAssetReference;
@property (strong, nonatomic) NSSet *excludedAssets; // @synthesize excludedAssets=_excludedAssets;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXAssetReference *hitAssetReference; // @synthesize hitAssetReference=_hitAssetReference;
@property (nonatomic) BOOL isDragSessionActive; // @synthesize isDragSessionActive=_isDragSessionActive;
@property (nonatomic) BOOL isUpdatingExcludedAssets; // @synthesize isUpdatingExcludedAssets=_isUpdatingExcludedAssets;
@property (readonly, nonatomic) NSMutableSet *localDragSessions; // @synthesize localDragSessions=_localDragSessions;
@property (nonatomic) BOOL reorderFeedbackEnabled; // @synthesize reorderFeedbackEnabled=_reorderFeedbackEnabled;
@property (readonly, nonatomic) _UIDragSnappingFeedbackGenerator *reorderFeedbackGenerator; // @synthesize reorderFeedbackGenerator=_reorderFeedbackGenerator;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property (readonly, nonatomic) UIViewController *viewControllerForPresentation;

- (void).cxx_destruct;
- (id)_actionManagerForDropSession:(id)arg1;
- (BOOL)_addDraggedAssetReferences:(id)arg1 toLocalSession:(id)arg2;
- (id)_assetReferenceForDragItem:(id)arg1;
- (id)_createDragItemForAssetReference:(id)arg1;
- (id)_createLocalSession;
- (id)_draggableAssetReferenceAtLocation:(struct CGPoint)arg1;
- (void)_localSessionForDragSession:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)_localSessionForDropSession:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)_presentConfidentialityWarning;
- (void)_pruneLocalSessionIfFinished:(id)arg1;
- (void)_removeDraggedAssetReferece:(id)arg1 fromLocalSession:(id)arg2;
- (void)_setupWithContentView:(id)arg1;
- (unsigned long long)_supportedDropOperationForSession:(id)arg1;
- (void)_updateDraggedAssetReferences;
- (void)_updateDropTarget;
- (void)_updateExcludedAssets;
- (void)_updateIsDragSessionActive;
- (void)_updateTrackedAssetReferences;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (BOOL)canDragIn;
- (BOOL)canDragOut;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)hostViewControllerForActionPerformer:(id)arg1;
- (id)init;
- (id)initWithContentView:(id)arg1 selectionManager:(id)arg2 assetCollectionActionManager:(id)arg3 delegate:(id)arg4;
- (void)localDragSession:(id)arg1 didChangeProperty:(SEL)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)scrollView;

@end

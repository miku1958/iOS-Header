//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDropInteractionDelegate_Private-Protocol.h>
#import <UIKitCore/_UICollectionViewShadowUpdatesRebaseApplicable-Protocol.h>

@class CADisplayLink, NSIndexPath, NSString, UICollectionView, UICollectionViewDropProposal, UIDropInteraction, _UIDragDestinationControllerDropProposalState, _UIDragDestinationControllerReorderingState, _UIDragDestinationControllerSessionState;
@protocol UIDropSession, _UICollectionViewDragDestinationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable>
{
    UICollectionView *_collectionView;
    UIDropInteraction *_dropInteraction;
    id<_UICollectionViewDragDestinationControllerDelegate> _delegate;
    CADisplayLink *_reorderDisplayLink;
    _UIDragDestinationControllerSessionState *_sessionState;
    _UIDragDestinationControllerReorderingState *_reorderingState;
    _UIDragDestinationControllerDropProposalState *_dropProposalState;
}

@property (weak, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, nonatomic) UICollectionViewDropProposal *currentDropProposal;
@property (readonly, nonatomic) id<UIDropSession> currentDropSession;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UICollectionViewDragDestinationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property (strong, nonatomic) _UIDragDestinationControllerDropProposalState *dropProposalState; // @synthesize dropProposalState=_dropProposalState;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isActive;
@property (strong, nonatomic) CADisplayLink *reorderDisplayLink; // @synthesize reorderDisplayLink=_reorderDisplayLink;
@property (strong, nonatomic) _UIDragDestinationControllerReorderingState *reorderingState; // @synthesize reorderingState=_reorderingState;
@property (strong, nonatomic) _UIDragDestinationControllerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsLocalSessionReordering;

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
- (void)_cancelCurrentInteractiveReorder;
- (void)_cancelInteractiveReorderingIfNeeded;
- (void)_commitCurrentDragAndDropSession;
- (void)_commitCurrentInteractiveReordering;
- (id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg1 withCurrentDragLocation:(struct CGPoint)arg2;
- (void)_configureInteraction;
- (void)_configureReorderingDisplayLinkIfNeeded;
- (BOOL)_delegateImplementsDidExit;
- (BOOL)_delegateImplementsDropActionForIndexPath;
- (BOOL)_delegateImplementsPerformDropFromIndexPathsWithAction;
- (BOOL)_delegateImplementsPerformDropFromIndexPathsWithCoordinator;
- (BOOL)_delegateImplementsSelector:(SEL)arg1;
- (BOOL)_delegateImplementsTargetIndexPath;
- (id)_dragAndDropController;
- (id)_dragDestinationDelegateActual;
- (id)_dragDestinationDelegateProxy;
- (id)_dropDelegateActual;
- (id)_dropDelegateProxy;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_effectiveDropProposalForProposal:(id)arg1;
- (void)_endInteractiveReorderingIfNeeded;
- (BOOL)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg1 proposedNextItemAttributes:(id)arg2;
- (BOOL)_isCompatibilityMode;
- (BOOL)_isLocalInteractiveMove;
- (BOOL)_isMultiItemSource;
- (void)_pauseReorderingDisplayLink;
- (id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)arg1;
- (void)_reorderingDisplayLinkDidTick;
- (void)_resumeReorderingDisplayLink;
- (BOOL)_shouldPerformMovementForProposal:(id)arg1;
- (BOOL)_shouldQueryDropActionForIndexPath:(id)arg1;
- (void)_updateDropProposalByQueryingClientIfNeeded:(id)arg1;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (void)dragSourceSelectedItemCountDidChangeWithCount:(long long)arg1;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropWasCancelled;
- (BOOL)hasPerformedReordering;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;
- (BOOL)isInteractiveReorderingDisabled;

@end

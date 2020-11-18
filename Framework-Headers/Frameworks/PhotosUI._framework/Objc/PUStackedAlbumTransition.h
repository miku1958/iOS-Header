//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUNavigationTransition.h>

#import <PhotosUI/PUCollectionViewLayoutTransitioningDelegate-Protocol.h>
#import <PhotosUI/PUTransitionViewAnimatorDelegate-Protocol.h>

@class NSSet, NSString, PHCollection, PUPhotoPinchGestureRecognizer, PUStackedAlbumLayout, PUStackedAlbumTransitionLayout, PUTransitionViewAnimator, UIView, UIViewController;
@protocol PLAssetContainer, PUStackedAlbumControllerTransition, PUStackedAlbumTransitionDelegate;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumTransition : PUNavigationTransition <PUCollectionViewLayoutTransitioningDelegate, PUTransitionViewAnimatorDelegate>
{
    struct CGRect _popTransitionInitialVisibleBounds;
    NSSet *_popTransitionInitialVisibleStackedAssetIndexPaths;
    UIView *_animatorView;
    BOOL _isExpanding;
    BOOL _isForStandInAlbum;
    BOOL _forFolder;
    id<PLAssetContainer> _photoCollection;
    PHCollection *_ph_photoCollection;
    id<PUStackedAlbumTransitionDelegate> _delegate;
    PUStackedAlbumLayout *__transitionLayout;
    PUStackedAlbumTransitionLayout *__interactiveTransitionLayout;
    PUTransitionViewAnimator *__transitionViewAnimator;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    id __disableToken;
    struct CGPoint _interactionCenter;
}

@property (strong, nonatomic, setter=_setDisableToken:) id _disableToken; // @synthesize _disableToken=__disableToken;
@property (strong, nonatomic, setter=_setInteractiveTransitionLayout:) PUStackedAlbumTransitionLayout *_interactiveTransitionLayout; // @synthesize _interactiveTransitionLayout=__interactiveTransitionLayout;
@property (strong, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // @synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer;
@property (weak, nonatomic, setter=_setTransitionLayout:) PUStackedAlbumLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property (strong, nonatomic, setter=_setTransitionViewAnimator:) PUTransitionViewAnimator *_transitionViewAnimator; // @synthesize _transitionViewAnimator=__transitionViewAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUStackedAlbumTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForFolder) BOOL forFolder; // @synthesize forFolder=_forFolder;
@property (readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *fromViewController; // @dynamic fromViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint interactionCenter; // @synthesize interactionCenter=_interactionCenter;
@property (nonatomic) BOOL isExpanding; // @synthesize isExpanding=_isExpanding;
@property (nonatomic, setter=setForStandInAlbum:) BOOL isForStandInAlbum; // @synthesize isForStandInAlbum=_isForStandInAlbum;
@property (strong, nonatomic, setter=ph_setPhotoCollection:) PHCollection *ph_photoCollection; // @synthesize ph_photoCollection=_ph_photoCollection;
@property (strong, nonatomic) id<PLAssetContainer> photoCollection; // @synthesize photoCollection=_photoCollection;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController<PUStackedAlbumControllerTransition> *toViewController; // @dynamic toViewController;

- (void).cxx_destruct;
- (id)_newInteractiveTransitionViewAnimatorForLayout:(id)arg1 collectionView:(id)arg2;
- (id)_newTransitionLayoutWithStackedAlbumLayout:(id)arg1 otherLayout:(id)arg2 forPush:(BOOL)arg3;
- (id)_popTransitionInitialVisibleStackedAssetIndexPaths:(id)arg1;
- (void)_setExpanding:(BOOL)arg1;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (void)collectionViewLayout:(id)arg1 willSupplyLayoutAttributes:(id)arg2;
- (BOOL)collectionViewLayoutShouldProvideCustomAnimations:(id)arg1;
- (void)completeInteractiveOperation:(long long)arg1 finished:(BOOL)arg2;
- (id)init;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 isExpanding:(BOOL)arg2;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2;
- (void)transitionViewAnimatorDidUpdate:(id)arg1;
- (void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout struct CGPoint *)arg2;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;

@end


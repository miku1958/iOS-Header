//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKDiscoveryCardViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/UICollectionViewDataSource-Protocol.h>
#import <PassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString, PKContinuousButton, PKDiscoveryArticleAnimatedTransitioningHandler, PKDiscoveryArticleLayout, PKDiscoveryCardView, UIActivityIndicatorView, UICollectionView, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;
@protocol OS_dispatch_queue;

@interface PKDiscoveryArticleViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PKDiscoveryCardViewDelegate, PKPaymentSetupDelegate>
{
    PKDiscoveryArticleAnimatedTransitioningHandler *_transitioningHandler;
    PKDiscoveryArticleLayout *_articleLayout;
    struct UIEdgeInsets _contentInsets;
    PKContinuousButton *_dismissButton;
    BOOL _isDownloading;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_downloadingLabel;
    NSString *_referrerIdentifierOverride;
    CDUnknownBlockType _callToActionTappedOverride;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGestureRecognizer;
    NSMutableDictionary *_cellImageCache;
    NSMutableDictionary *_imageDownloads;
    struct os_unfair_lock_s _lockDownloads;
    NSObject<OS_dispatch_queue> *_loadImageQueue;
    BOOL _hasSafeAreaInsetOverride;
    BOOL _animatingCard;
    BOOL _useCustomPresentation;
    BOOL _shouldHideStatusBar;
    PKDiscoveryCardView *_cardView;
    UICollectionView *_collectionView;
    struct UIEdgeInsets _safeAreaOverrideInsets;
}

@property (nonatomic, getter=isAnimatingCard) BOOL animatingCard; // @synthesize animatingCard=_animatingCard;
@property (readonly, nonatomic) PKDiscoveryCardView *cardView; // @synthesize cardView=_cardView;
@property (readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSafeAreaInsetOverride; // @synthesize hasSafeAreaInsetOverride=_hasSafeAreaInsetOverride;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets safeAreaOverrideInsets; // @synthesize safeAreaOverrideInsets=_safeAreaOverrideInsets;
@property (nonatomic) BOOL shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property (readonly) Class superclass;
@property (nonatomic, getter=shouldUseCustomPresentation) BOOL useCustomPresentation; // @synthesize useCustomPresentation=_useCustomPresentation;

- (void).cxx_destruct;
- (void)_configureCallToActionShelfView:(id)arg1 forCallToActionShelf:(id)arg2 atIndexPath:(id)arg3;
- (void)_configureInlineMediaShelfView:(id)arg1 forInlineMediaShelf:(id)arg2 atIndexPath:(id)arg3;
- (void)_dismissButtonTapped;
- (void)_handlePanGesture:(id)arg1;
- (BOOL)_hasCardInGalleryView;
- (void)_leftScreenEdgePanSwipeGesture:(id)arg1;
- (void)_loadMedia:(id)arg1 forShelfViewAtIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (id)_shelfForIndexPath:(id)arg1;
- (void)_systemTextSizeChanged;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithArticleLayout:(id)arg1 referrerIdentifier:(id)arg2;
- (id)initWithItemIdentifier:(id)arg1 referrerIdentifier:(id)arg2;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setArticleLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setCallToActionTappedOverride:(CDUnknownBlockType)arg1;
- (void)setIsDownloading:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end


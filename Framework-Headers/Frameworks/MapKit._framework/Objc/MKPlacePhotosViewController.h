//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKAddPhotoBadgeViewDelegate-Protocol.h>
#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKMuninContainerViewDelegate-Protocol.h>
#import <MapKit/MKMuninViewProvider-Protocol.h>
#import <MapKit/MKPhotoGalleryTransitionAnimator-Protocol.h>
#import <MapKit/MKPlaceAttributionCellDelegate-Protocol.h>
#import <MapKit/MKPlacePhotoGalleryViewControllerDelegate-Protocol.h>
#import <MapKit/UIScrollViewDelegate-Protocol.h>
#import <MapKit/UIViewControllerTransitioningDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKMuninContainerView, MKMuninView, MKPhotoBigAttributionView, MKPlaceAttributionCell, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UIScrollView, UIView, _MKPlaceViewController;
@protocol MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate, _MKInfoCardAnalyticsDelegate;

@interface MKPlacePhotosViewController : UIViewController <MKPlaceAttributionCellDelegate, UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MKAddPhotoBadgeViewDelegate, MKMuninContainerViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKMuninViewProvider>
{
    UIView *_bottomHairline;
    UIImageView *_imageViewForTransition;
    MKPhotoBigAttributionView *_primaryAttributionView;
    MKPhotoBigAttributionView *_secondaryAttributionView;
    NSArray *_photoViews;
    UIScrollView *_photosContainerScrollView;
    UIView *_photosContainer;
    UIView *_photosSmallAttributionsView;
    UIView *_attributionClippingview;
    double _lastPhotoScrollOffset;
    BOOL _photoScrollViewScrollingLeft;
    BOOL _photoScrollViewScrollingRight;
    BOOL _canUseFullscreenViewer;
    BOOL _photoLoaded;
    BOOL _loadAppImageCanceledOrFailed;
    BOOL _isRTL;
    unsigned long long _photosCount;
    UIView *_externalView;
    MKMapItem *_mapItem;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_photos;
    unsigned long long _mode;
    unsigned long long _originalMode;
    unsigned long long _options;
    MKPlaceAttributionCell *_attributionCell;
    UIButton *_previousPageButton;
    UIButton *_nextPageButton;
    MKMuninContainerView *_muninContainerView;
    UIScrollView *_parentScrollView;
    unsigned long long _initialAppearanceSignpostID;
    BOOL _isDisappearing;
    BOOL _showsBottomHairline;
    BOOL _hoverActive;
    _MKPlaceViewController *_owner;
    id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;
}

@property (readonly, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hoverActive; // @synthesize hoverActive=_hoverActive;
@property (readonly, nonatomic) BOOL isCompactMode;
@property (readonly, nonatomic) BOOL isFirstParty;
@property (readonly, nonatomic) MKMuninView *muninView;
@property (readonly, nonatomic) unsigned long long numberOfBigAttributionViews;
@property (weak, nonatomic) _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property (weak, nonatomic) id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property (readonly, nonatomic) BOOL shouldShowAddPhotoButtons;
@property (nonatomic) BOOL showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustScrollIndexByOffset:(long long)arg1;
- (void)_applyCornerRadius;
- (BOOL)_canShowWhileLocked;
- (void)_cancelLoadPhotos;
- (void)_catchScrollNotification:(id)arg1;
- (void)_createImageViews;
- (void)_didBecomeActive:(id)arg1;
- (void)_didTapAttributionViewWithPresentingViewController:(id)arg1 photoAttributionView:(id)arg2;
- (id)_firstPartyMorePhotosAttributionString;
- (void)_loadPhotos;
- (void)_logUGCAction:(int)arg1;
- (struct CGSize)_photoActionSize;
- (void)_photoSelected:(id)arg1;
- (struct CGSize)_photoSizeForIndex:(unsigned long long)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_scrollNext;
- (void)_scrollPrevious;
- (void)_setContentVisibility:(long long)arg1;
- (void)_updateAlphaAttribution;
- (void)_updateChevronVisibility;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)addAttributionCell;
- (void)addPhotoBadgeViewTapped:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)attributionString;
- (void)dealloc;
- (void)didTapPrimaryAttributionViewWithPresentingViewController:(id)arg1;
- (void)didTapSecondaryAttributionViewWithPresentingViewController:(id)arg1;
- (BOOL)dismissPhotoGalleryIfNecessary:(id)arg1;
- (id)formattedAttributionString;
- (void)handleHover:(id)arg1;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)infoCardThemeChanged;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (BOOL)isParsecProcess;
- (BOOL)isSafariProcess;
- (BOOL)isSiriProcess;
- (void)layoutImages;
- (void)muninContainerView:(id)arg1 didAddMuninView:(id)arg2;
- (void)openURL;
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;
- (void)placePhotoGallery:(id)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(id)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryAdditionalViewTapped:(id)arg1;
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidSelectAddPhoto:(id)arg1;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentVisibility:(long long)arg1;
- (struct CGSize)sizeForIndex:(unsigned long long)arg1;
- (void)updateAttributionCell;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)updateBottomHairlineVisibility;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

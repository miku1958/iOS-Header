//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant-Protocol.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSAttributedString, NSString, UIActivityIndicatorView, UIImage, UILabel, UIView, VideosExtrasZoomableImageView, VideosExtrasZoomingImageInteractiveTransitionSourceContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasImageViewController : UIViewController <VideosExtrasZoomingImageTransitionParticipant>
{
    BOOL _allowsPinchingImageForInteractiveZoomingImageTransition;
    BOOL _overlayHidden;
    unsigned long long _imageIndex;
    NSString *_zoomingImageTransitionIdentifier;
    UIActivityIndicatorView *_activityIndicatorView;
    VideosExtrasZoomableImageView *_zoomableImageView;
    NSArray *_gestureRecognizers;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleLeadingConstraint;
    MPUContentSizeLayoutConstraint *_descriptionLeadingConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelConstraint;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property (nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition; // @synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition;
@property (strong, nonatomic) MPUContentSizeLayoutConstraint *bottomLabelConstraint; // @synthesize bottomLabelConstraint=_bottomLabelConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) MPUContentSizeLayoutConstraint *descriptionLeadingConstraint; // @synthesize descriptionLeadingConstraint=_descriptionLeadingConstraint;
@property (strong, nonatomic) NSAttributedString *descriptionString;
@property (copy, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageIndex; // @synthesize imageIndex=_imageIndex;
@property (strong, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext; // @synthesize interactiveTransitionSourceContext=_interactiveTransitionSourceContext;
@property (nonatomic) BOOL overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong, nonatomic) MPUContentSizeLayoutConstraint *subtitleLeadingConstraint; // @synthesize subtitleLeadingConstraint=_subtitleLeadingConstraint;
@property (strong, nonatomic) NSAttributedString *subtitleString;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *textContainmentView; // @synthesize textContainmentView=_textContainmentView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSAttributedString *titleString;
@property (strong, nonatomic) MPUContentSizeLayoutConstraint *topLabelConstraint; // @synthesize topLabelConstraint=_topLabelConstraint;
@property (strong, nonatomic) VideosExtrasZoomableImageView *zoomableImageView; // @synthesize zoomableImageView=_zoomableImageView;
@property (copy, nonatomic) NSString *zoomingImageTransitionIdentifier; // @synthesize zoomingImageTransitionIdentifier=_zoomingImageTransitionIdentifier;

- (void).cxx_destruct;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end


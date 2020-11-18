//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class AVAsset, AVPlayerItem, AVVideoComposition, NSArray, NSLayoutConstraint, NSString, PXCapsuleButton, PXContextualNotification, PXContextualNotificationChevronView, PXImageRequester, PXVideoPlayerView, UIImage, UIImageView, UILabel;

@interface PXContextualNotificationView : UIView <PXChangeObserver>
{
    BOOL _useRegularHitTesting;
    long long _style;
    PXContextualNotification *_contextualNotification;
    NSString *_title;
    UIImage *_titleIcon;
    NSString *_message;
    AVAsset *_loopingVideoAsset;
    AVVideoComposition *_loopingVideoComposition;
    UIView *_contentView;
    UIImage *_placeholderImage;
    PXImageRequester *_imageRequester;
    UILabel *_titleLabel;
    UIImageView *_titleIconView;
    UILabel *_messageLabel;
    UIImageView *_dismissIconView;
    PXVideoPlayerView *_mediaView;
    NSLayoutConstraint *_mediaViewHeightConstraint;
    double __mediaAspectRatio;
    AVPlayerItem *__loopingPlayerItem;
    PXCapsuleButton *_actionButton;
    PXContextualNotificationChevronView *_chevronView;
    NSArray *_constraints;
}

@property (strong, nonatomic, setter=_setLoopingPlayerItem:) AVPlayerItem *_loopingPlayerItem; // @synthesize _loopingPlayerItem=__loopingPlayerItem;
@property (nonatomic, setter=_setMediaAspectRatio:) double _mediaAspectRatio; // @synthesize _mediaAspectRatio=__mediaAspectRatio;
@property (strong, nonatomic) PXCapsuleButton *actionButton; // @synthesize actionButton=_actionButton;
@property (strong, nonatomic) PXContextualNotificationChevronView *chevronView; // @synthesize chevronView=_chevronView;
@property (copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (weak, nonatomic) PXContextualNotification *contextualNotification; // @synthesize contextualNotification=_contextualNotification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImageView *dismissIconView; // @synthesize dismissIconView=_dismissIconView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property (copy, nonatomic) AVAsset *loopingVideoAsset; // @synthesize loopingVideoAsset=_loopingVideoAsset;
@property (copy, nonatomic) AVVideoComposition *loopingVideoComposition; // @synthesize loopingVideoComposition=_loopingVideoComposition;
@property (readonly, nonatomic) PXVideoPlayerView *mediaView; // @synthesize mediaView=_mediaView;
@property (readonly, nonatomic) NSLayoutConstraint *mediaViewHeightConstraint; // @synthesize mediaViewHeightConstraint=_mediaViewHeightConstraint;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property (strong, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UIImage *titleIcon; // @synthesize titleIcon=_titleIcon;
@property (readonly, nonatomic) UIImageView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (nonatomic) BOOL useRegularHitTesting; // @synthesize useRegularHitTesting=_useRegularHitTesting;

- (void).cxx_destruct;
- (void)_handleActionButton:(id)arg1;
- (void)_handleDidSetVideoAudioSession;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_startLoopingWithItem:(id)arg1;
- (void)_updateLoopingPlayerItem;
- (void)_updateMessageLabelForCMMCard;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (BOOL)isPointInsideDismissArea:(struct CGPoint)arg1;
- (BOOL)isPointInsidePassthroughArea:(struct CGPoint)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setPlaceholderImage:(id)arg1 imageRequester:(id)arg2;
- (void)updateConstraints;

@end

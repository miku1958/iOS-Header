//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoView, UIImageView, UILabel;

@interface GKNotificationBannerView : UIView
{
    BOOL _canTransitionToPlayerAvatar;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    double _duration;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _touchHandler;
    GKDashboardPlayerPhotoView *_playerAvatarView;
    UILabel *_messageLabel2;
    UILabel *_actionLabel;
    UIView *_centeringView;
    double _preferredBannerWidth;
}

@property (strong, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property (nonatomic) BOOL canTransitionToPlayerAvatar; // @synthesize canTransitionToPlayerAvatar=_canTransitionToPlayerAvatar;
@property (strong, nonatomic) UIView *centeringView; // @synthesize centeringView=_centeringView;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property (strong, nonatomic) UILabel *messageLabel2; // @synthesize messageLabel2=_messageLabel2;
@property (strong, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView; // @synthesize playerAvatarView=_playerAvatarView;
@property (readonly, nonatomic) double preferredBannerWidth; // @synthesize preferredBannerWidth=_preferredBannerWidth;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (copy, nonatomic) CDUnknownBlockType touchHandler; // @synthesize touchHandler=_touchHandler;

+ (BOOL)_preventsAppearanceProxyCustomization;
- (void).cxx_destruct;
- (void)_wasTouched:(id)arg1;
- (void)awakeFromNib;
- (void)callCompletionHandler;
- (void)createBackdropView;
- (void)createMessageLabel:(id)arg1 withTextStyle:(id)arg2;
- (void)createTitleLabel:(id)arg1 withTextStyle:(id)arg2;
- (void)dealloc;
- (void)fadeInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fadeOutQuickly:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)hideBanner;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 player:(id)arg2 imageView:(id)arg3 message:(id)arg4;
- (void)layoutSubviews;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithTouchHandler:(CDUnknownBlockType)arg1;
- (void)startLoadingPlayerAvatar;
- (void)transitionToPlayerAvatar;

@end

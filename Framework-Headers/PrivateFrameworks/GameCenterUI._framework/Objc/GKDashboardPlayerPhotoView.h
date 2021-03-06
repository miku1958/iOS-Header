//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <GameCenterUI/CNAvatarViewControllerDelegate-Protocol.h>

@class CNAvatarViewController, GKPlayer, NSObject, UIImageView;
@protocol GKPlayerAvatarViewDelegate;

@interface GKDashboardPlayerPhotoView : UIView <CNAvatarViewControllerDelegate>
{
    BOOL _useDarkerPlaceholder;
    BOOL _usingPlaceholder;
    BOOL _selected;
    GKPlayer *_player;
    NSObject<GKPlayerAvatarViewDelegate> *_delegate;
    long long _avatarSize;
    CNAvatarViewController *_avatarViewController;
    UIImageView *_avatarImageView;
}

@property (strong, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property (nonatomic) long long avatarSize; // @synthesize avatarSize=_avatarSize;
@property (strong, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property (weak, nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasImage;
@property (strong, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property (nonatomic) BOOL selected; // @synthesize selected=_selected;
@property (nonatomic) BOOL useDarkerPlaceholder; // @synthesize useDarkerPlaceholder=_useDarkerPlaceholder;
@property (nonatomic, getter=isUsingPlaceholder) BOOL usingPlaceholder; // @synthesize usingPlaceholder=_usingPlaceholder;

- (void).cxx_destruct;
- (void)commonInit;
- (void)didUpdateContentForAvatarViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidatePhoto;
- (void)layoutSubviews;
- (void)refreshImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setContactOnAvatarViewController:(id)arg1;
- (void)setPlayer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end


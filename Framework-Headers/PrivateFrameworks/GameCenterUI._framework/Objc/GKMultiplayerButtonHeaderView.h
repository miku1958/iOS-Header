//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel, UITapGestureRecognizer;

@interface GKMultiplayerButtonHeaderView : UIView
{
    BOOL _mayChangeCount;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_iconImageView;
    UITapGestureRecognizer *_tapGesture;
    UIImageView *_nextImageView;
    NSLayoutConstraint *_iconImageViewLeading;
    NSLayoutConstraint *_nextImageViewTrailing;
}

@property (strong, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (strong, nonatomic) NSLayoutConstraint *iconImageViewLeading; // @synthesize iconImageViewLeading=_iconImageViewLeading;
@property (nonatomic) BOOL mayChangeCount; // @synthesize mayChangeCount=_mayChangeCount;
@property (strong, nonatomic) UIImageView *nextImageView; // @synthesize nextImageView=_nextImageView;
@property (strong, nonatomic) NSLayoutConstraint *nextImageViewTrailing; // @synthesize nextImageViewTrailing=_nextImageViewTrailing;
@property (strong, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dealloc;
- (void)setAction:(SEL)arg1 forTarget:(id)arg2;
- (void)setButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setGameIcon:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (void)setPlayerCount:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

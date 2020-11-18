//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface PLPhotoTileBadgeView : UIView
{
    UIImageView *__photoIrisBadgeImageView;
    BOOL _isOverContent;
    BOOL _isIrisBadgeHidden;
    BOOL _enabled;
    BOOL _selected;
    long long _style;
    long long _numberOfPhotos;
    UIView *__backgroundView;
    UIImageView *__badgeImageView;
    UILabel *__textLabel;
    UIButton *__button;
}

@property (readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property (readonly, nonatomic) UIImageView *_badgeImageView; // @synthesize _badgeImageView=__badgeImageView;
@property (strong, nonatomic, setter=_setButton:) UIButton *_button; // @synthesize _button=__button;
@property (readonly, nonatomic) UIImageView *_photoIrisBadgeImageView;
@property (readonly, nonatomic) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic, setter=setIrisBadgeHidden:) BOOL isIrisBadgeHidden; // @synthesize isIrisBadgeHidden=_isIrisBadgeHidden;
@property (nonatomic, setter=setOverContent:) BOOL isOverContent; // @synthesize isOverContent=_isOverContent;
@property (nonatomic) long long numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
@property (nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (nonatomic) long long style; // @synthesize style=_style;

- (void)_addButton;
- (void)_commonPLPhotoTileBadgeViewInitialization:(long long)arg1;
- (void)_createPhotoIrisBadgeViewIfNeeded;
- (void)_toggleOption:(id)arg1;
- (void)_updateBadgeImage;
- (void)_updateBadgeText;
- (void)_updatePhotoIrisBadgeAppearanceAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setAlpha:(double)arg1;
- (void)setIrisBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

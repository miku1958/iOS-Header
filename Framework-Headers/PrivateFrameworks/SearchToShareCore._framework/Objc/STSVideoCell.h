//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchToShareCore/STSImageCell.h>

@class NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface STSVideoCell : STSImageCell
{
    UIButton *_playButton;
    UIView *_footerContainer;
    UILabel *_titleLabel;
    UIImageView *_providerIconView;
    UILabel *_subtitleLabel;
    UILabel *_providerLabel;
    UILabel *_durationLabel;
    NSMutableArray *_constraints;
    CDUnknownBlockType _playButtonAction;
}

@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) CDUnknownBlockType playButtonAction; // @synthesize playButtonAction=_playButtonAction;
@property (strong, nonatomic) UIImage *providerIcon;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)_didPressPlay;
- (void)_updateHiddenViewsAnimated:(BOOL)arg1;
- (double)imageAspectRatio;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)updateConstraints;

@end


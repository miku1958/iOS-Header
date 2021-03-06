//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIFont, UILabel;

@interface CPUITitleView : UIView
{
    NSLayoutConstraint *_badgeWidthConstraint;
    BOOL _explicitTrack;
    BOOL _shouldUseMusicExplicitGlyph;
    UIFont *_font;
    UILabel *_titleLabel;
    UILabel *_explicitLabel;
}

@property (strong, nonatomic) UILabel *explicitLabel; // @synthesize explicitLabel=_explicitLabel;
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (nonatomic) BOOL shouldUseMusicExplicitGlyph; // @synthesize shouldUseMusicExplicitGlyph=_shouldUseMusicExplicitGlyph;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)_createLabelWithTextAlignment:(long long)arg1;
- (void)_updateExplicitTreatmentString;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setupConstraints;
- (void)updateConstraints;

@end


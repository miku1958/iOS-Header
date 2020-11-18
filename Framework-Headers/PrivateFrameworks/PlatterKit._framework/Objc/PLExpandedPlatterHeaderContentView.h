//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLPlatterHeaderContentView.h>

@class NSArray;

@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView
{
    NSArray *_iconButtonShadows;
}

- (void).cxx_destruct;
- (void)_configureDateLabel;
- (void)_configureIconButtonsForIcons:(id)arg1;
- (void)_configureUtilityButton;
- (id)_ellipsisHighlightedBackgroundImage;
- (double)_headerHeightForWidth:(double)arg1;
- (double)_iconDimension;
- (double)_iconLeadingPadding;
- (id)_iconShadowImageForIcon:(id)arg1;
- (double)_iconTrailingPadding;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextTitleLabelBaselineOffset;
- (void)_layoutDateLabelWithScale:(double)arg1;
- (void)_layoutIconButtonsWithScale:(double)arg1;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (double)_titleFirstLineCenterY;
- (struct CGRect)_titleLabelBoundsForSize:(struct CGSize)arg1;
- (void)_updateStylingForTitleLabel:(id)arg1;
- (void)_updateUtilityButtonFont;
- (void)_updateUtilityButtonVibrantStyling;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(BOOL)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


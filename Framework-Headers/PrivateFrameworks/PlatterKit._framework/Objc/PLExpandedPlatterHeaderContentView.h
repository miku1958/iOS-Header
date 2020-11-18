//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLPlatterHeaderContentView.h>

@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView
{
}

- (void)_configureDateLabel;
- (void)_configureIconButton:(id)arg1 withIcon:(id)arg2;
- (void)_configureUtilityButton;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_ellipsisHighlightedBackgroundImage;
- (double)_headerHeightForWidth:(double)arg1;
- (double)_iconDimension;
- (double)_iconLeadingPadding;
- (double)_iconTrailingPadding;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextTitleLabelBaselineOffset;
- (void)_layoutDateLabelWithScale:(double)arg1;
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

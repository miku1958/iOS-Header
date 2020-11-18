//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NCLookViewFontProvider, NSString, UILabel, UIView;

@interface WGShortLookStyleButton : UIControl
{
    UIView *_backgroundView;
    UILabel *_titleLabel;
    NCLookViewFontProvider *_fontProvider;
    double _dimension;
}

@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureMaskIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (double)_dimension;
- (id)_fontProvider;
- (void)_layoutTitleLabel;
- (double)_minimumScaleFactorForFont:(id)arg1;
- (void)_updateTitleLabelFont;
- (void)invalidateCachedGeometry;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

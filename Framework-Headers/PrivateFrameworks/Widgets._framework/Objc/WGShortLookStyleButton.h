//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MTFontProvider, MTMaterialView, NSString, UILabel;

@interface WGShortLookStyleButton : UIControl
{
    MTMaterialView *_backgroundView;
    UILabel *_titleLabel;
    MTFontProvider *_fontProvider;
    double _dimension;
    BOOL _backgroundBlurred;
}

@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property (strong, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (double)_backgroundViewCornerRadius;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureMaskIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (double)_dimension;
- (id)_fontProvider;
- (void)_layoutTitleLabel;
- (double)_minimumScaleFactorForFont:(id)arg1;
- (void)_setBackgroundViewCornerRadius:(double)arg1;
- (void)_updateTitleLabelFont;
- (void)invalidateCachedGeometry;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView
{
    NTKColoringLabel *_headerLeadingLabel;
    NTKColoringLabel *_headerTrailingLabel;
    BOOL _shouldTruncateHeaderLeadingLabelFirst;
    NTKColoringLabel *_body1Label;
    NTKColoringLabel *_body2Label;
    UIView<NTKComplicationImageView> *_headerGlyph;
    UIView<NTKComplicationImageView> *_body1Glyph;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_layoutContentView;
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_update;
- (void)_updateForStandardBodyTemplate:(id)arg1;
- (void)_updateForTallBodyTemplate:(id)arg1;
- (void)_updateLabelsMaxWidths;
- (id)initWithFrame:(struct CGRect)arg1;

@end


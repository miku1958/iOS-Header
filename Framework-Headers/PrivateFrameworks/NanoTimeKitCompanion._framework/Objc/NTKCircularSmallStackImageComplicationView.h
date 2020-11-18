//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallStackImageComplicationView : NTKCircularComplicationView
{
    NTKColoringLabel *_label;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (BOOL)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateForTemplateChange;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel;

@interface NTKModularSmallDateTemplateView : NTKModularTemplateView
{
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (BOOL)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_layoutContentView;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setIsXL:(BOOL)arg1;

@end


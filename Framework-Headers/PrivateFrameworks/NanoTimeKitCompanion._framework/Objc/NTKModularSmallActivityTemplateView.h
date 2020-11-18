//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKModularSmallActivityTemplateView : NTKModularTemplateView
{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (BOOL)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_layoutContentView;
- (void)_setLayoutEmptyRingsNoDot;
- (void)_update;
- (void)applyColorScheme:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setIsXL:(BOOL)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationCurvedProgressView;

@interface NTKRichComplicationBaseCircularOpenGaugeRangeTextView : NTKRichComplicationCircularBaseView
{
    NTKRichComplicationCurvedProgressView *_progressView;
    NTKColoringLabel *_leadingSmallLabel;
    NTKColoringLabel *_trailingSmallLabel;
    NTKColoringLabel *_centerLabel;
}

@property (strong, nonatomic) NTKColoringLabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property (strong, nonatomic) NTKColoringLabel *leadingSmallLabel; // @synthesize leadingSmallLabel=_leadingSmallLabel;
@property (strong, nonatomic) NTKRichComplicationCurvedProgressView *progressView; // @synthesize progressView=_progressView;
@property (strong, nonatomic) NTKColoringLabel *trailingSmallLabel; // @synthesize trailingSmallLabel=_trailingSmallLabel;

+ (long long)progressFillStyle;
+ (BOOL)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
- (void)_editingDidEnd;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end

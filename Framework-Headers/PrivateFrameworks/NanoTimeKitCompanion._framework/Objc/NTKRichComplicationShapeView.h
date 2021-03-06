//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>

@class CAGradientLayer, CALayer, CAShapeLayer, CLKDevice, NSArray, NSString;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationShapeView : UIView <CLKMonochromeComplicationView>
{
    CLKDevice *_device;
    struct CGRect _previousBounds;
    BOOL _willUnfreezeForTransaction;
    UIView *_filterView;
    CALayer *_freezeLayer;
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_gradientLayer;
    NSArray *_gradientColors;
    NSArray *_filteredGradientColors;
    NSArray *_gradientLocations;
    double _monochromeFraction;
    id<CLKMonochromeFilterProvider> _filterProvider;
    double _progress;
    long long _filterStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property (readonly, nonatomic) long long filterStyle; // @synthesize filterStyle=_filterStyle;
@property (strong, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property (readonly) unsigned long long hash;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPath *)_generatePath;
- (id)_normalizeGradientLocations:(id)arg1;
- (struct CGPoint)_pointAtProgress:(float)arg1;
- (void)_setupGradientLayer:(id)arg1;
- (void)_setupShapeLayer:(id)arg1;
- (double)_shapeLineWidth;
- (id)_shapeStrokeColor;
- (BOOL)_shouldReverseGradient;
- (void)_updateGradient;
- (void)_updatePath;
- (id)device;
- (id)gradientLayer;
- (id)initForDevice:(id)arg1 withFilterStyle:(long long)arg2;
- (void)layoutSubviews;
- (struct CGPoint)pointAtProgress:(float)arg1;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (id)shapeLayer;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)unfreezeForTransaction;
- (void)updateMonochromeColor;

@end


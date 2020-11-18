//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIAccessibility/AXFKAFocusRingShapeLayer.h>

@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer
{
    AXFKAFocusRingBorderShapeLayer *_topBorderLayer;
}

@property (strong, nonatomic) AXFKAFocusRingBorderShapeLayer *topBorderLayer; // @synthesize topBorderLayer=_topBorderLayer;

- (void).cxx_destruct;
- (void)_updateTopLayerPath;
- (id)init;
- (double)lineWidthForTopLayer;
- (void)setPath:(struct CGPath *)arg1;
- (struct CGColor *)strokeColorForTopLayer;
- (id)topLayerFocusRingColorForTintColor:(id)arg1;
- (void)updateAppearance;

@end

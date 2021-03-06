//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKDrawingPaletteView, UIColor;

@protocol PKPalettePencilInteractionFeedbackHostViewDelegate <NSObject>
- (UIColor *)paletteBorderColor;
- (double)paletteBorderWidth;
- (double)paletteEdgeSpacing;
- (double)paletteEdgeSpacingForMinimized;
- (UIColor *)paletteShadowColor;
- (struct CGSize)paletteShadowOffset;
- (double)paletteShadowOpacity;
- (double)paletteShadowRadius;
- (double)paletteSpringAnimationDampingRatio;
- (double)paletteSpringAnimationResponse;
- (PKDrawingPaletteView *)paletteView;
@end


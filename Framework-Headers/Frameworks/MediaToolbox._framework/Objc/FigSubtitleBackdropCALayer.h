//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleBackdropCALayer : FigBaseCALayer
{
    struct OpaqueFigSubtitleBackdropCALayerInternal *bdLayerInternal;
}

- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContents:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (BOOL)shouldEnableBackdropLayer;
- (void)updateBackdropLayer;
- (void)updateHDRContentState:(BOOL)arg1;
- (void)updateWindowOpacity:(double)arg1;

@end


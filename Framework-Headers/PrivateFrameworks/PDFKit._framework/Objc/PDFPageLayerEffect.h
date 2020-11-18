//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffect : CALayer
{
    PDFPageLayerEffectPrivate *_private;
}

+ (struct CGColor *)_createLigtherColor:(struct CGColor *)arg1 withIntensity:(double)arg2;
+ (void)_updateColor:(id)arg1 forPopupAnnotation:(id)arg2 isSelected:(BOOL)arg3;
+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect)arg1 withLayer:(id)arg2;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFPopupLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFSearchSelectionLayerEffectsForSelection:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFSelectionLayerEffectsForSelection:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFWidgetLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
- (void).cxx_destruct;
- (id)annotation;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithPDFPageLayer:(id)arg1;

@end


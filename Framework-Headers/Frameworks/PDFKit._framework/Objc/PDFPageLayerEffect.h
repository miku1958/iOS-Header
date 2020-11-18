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

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect)arg1 withLayer:(id)arg2;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFSelectionLayerEffectsForSelection:(id)arg1 withLayer:(id)arg2;
- (void).cxx_destruct;
- (id)UUID;
- (id)annotation;
- (void)clearLollipopMagnifier;
- (void)clearTextSelectionHandles;
- (void)clearTextSelectionMagnifier;
- (void)enableTextSelectionHandles;
- (id)initWithPDFPageLayer:(id)arg1;
- (struct CGRect)pageFrame;
- (id)selection;
- (void)setLollipopMagnifierPagePoint:(struct CGPoint)arg1;
- (void)setPageFrame:(struct CGRect)arg1;
- (void)setSelection:(id)arg1;
- (void)setTextSelectionMagnifierPagePoint:(struct CGPoint)arg1;
- (BOOL)shouldRotateContent;
- (void)update;

@end


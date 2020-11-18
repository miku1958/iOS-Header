//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController;

@interface AKAnnotationLayer : CALayer
{
    BOOL _isObservingAnnotation;
    BOOL _wasLastDrawingClipped;
    BOOL _lastRedrawWasForDrawingBounds;
    AKAnnotation *_annotation;
    AKPageController *_pageController;
    CALayer *_fastPathLayer;
}

@property (strong) AKAnnotation *annotation; // @synthesize annotation=_annotation;
@property (strong, nonatomic) CALayer *fastPathLayer; // @synthesize fastPathLayer=_fastPathLayer;
@property BOOL isObservingAnnotation; // @synthesize isObservingAnnotation=_isObservingAnnotation;
@property BOOL lastRedrawWasForDrawingBounds; // @synthesize lastRedrawWasForDrawingBounds=_lastRedrawWasForDrawingBounds;
@property (weak) AKPageController *pageController; // @synthesize pageController=_pageController;
@property BOOL wasLastDrawingClipped; // @synthesize wasLastDrawingClipped=_wasLastDrawingClipped;

+ (id)newAnnotationLayerForAnnotation:(id)arg1 withPageController:(id)arg2;
- (void).cxx_destruct;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)_updateAnnotationLayerWithLoupeFastPath:(BOOL)arg1;
- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateContents;
- (void)updatePixelAlignment;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController;

@interface AKToolController : NSObject
{
    BOOL _allInkEnabled;
    BOOL _pencilInkEnabled;
    unsigned long long _toolMode;
    AKController *_controller;
}

@property BOOL allInkEnabled; // @synthesize allInkEnabled=_allInkEnabled;
@property (weak) AKController *controller; // @synthesize controller=_controller;
@property (readonly, nonatomic) BOOL isInDefaultMode;
@property BOOL pencilInkEnabled; // @synthesize pencilInkEnabled=_pencilInkEnabled;
@property (nonatomic) unsigned long long toolMode; // @synthesize toolMode=_toolMode;

+ (void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(BOOL)arg3;
- (void).cxx_destruct;
- (unsigned long long)_arrowStyleForToolTag:(long long)arg1;
- (struct CGRect)_centerBounds:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2;
- (struct CGPoint)_defaultCenterForNewAnnotation;
- (id)_defaultFillColorForAnnotationOfClass:(Class)arg1;
- (id)_defaultHeartTypingAttributesWithFillColor:(id)arg1;
- (struct CGRect)_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (id)_defaultTextBoxTypingAttributes;
- (id)_defaultTypingAttributes;
- (double)_modelBaseScaleFactorForNewAnnotation;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;
- (void)_setRectangleToFitTextOnTextAnnotation:(id)arg1;
- (double)_strokeWidthForNewAnnotation;
- (struct CGRect)_validatedRect:(struct CGRect)arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 ownedByPageController:(id)arg3 centeredAtPoint:(struct CGPoint)arg4;
- (void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(BOOL)arg3 shouldCascade:(BOOL)arg4;
- (id)createAnnotationOfType:(long long)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (unsigned long long)defaultToolMode;
- (id)initWithController:(id)arg1;
- (BOOL)isToolSenderEnabled:(id)arg1;
- (void)performToolActionForSender:(id)arg1;
- (void)resetToDefaultMode;
- (void)updateToolSenderState:(id)arg1 enabled:(BOOL)arg2;

@end

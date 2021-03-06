//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAnnotation, AKPageController;

@interface AKAnnotationEventHandler : NSObject
{
    BOOL _touchModifiersEnabled;
    BOOL _draggingHorizontalOnly;
    BOOL _draggingVerticalOnly;
    AKPageController *_pageController;
    AKAnnotation *_annotation;
    unsigned long long _initiallyDraggedArea;
    struct CGPoint _initialDraggedPoint;
    struct CGPoint _initialOtherPoint;
    struct CGPoint _initialCenter;
    struct CGPoint _lastPositionInModel;
    struct CGPoint _lastPositionInWindow;
}

@property (strong) AKAnnotation *annotation; // @synthesize annotation=_annotation;
@property BOOL draggingHorizontalOnly; // @synthesize draggingHorizontalOnly=_draggingHorizontalOnly;
@property BOOL draggingVerticalOnly; // @synthesize draggingVerticalOnly=_draggingVerticalOnly;
@property struct CGPoint initialCenter; // @synthesize initialCenter=_initialCenter;
@property struct CGPoint initialDraggedPoint; // @synthesize initialDraggedPoint=_initialDraggedPoint;
@property struct CGPoint initialOtherPoint; // @synthesize initialOtherPoint=_initialOtherPoint;
@property unsigned long long initiallyDraggedArea; // @synthesize initiallyDraggedArea=_initiallyDraggedArea;
@property struct CGPoint lastPositionInModel; // @synthesize lastPositionInModel=_lastPositionInModel;
@property struct CGPoint lastPositionInWindow; // @synthesize lastPositionInWindow=_lastPositionInWindow;
@property (weak) AKPageController *pageController; // @synthesize pageController=_pageController;
@property BOOL touchModifiersEnabled; // @synthesize touchModifiersEnabled=_touchModifiersEnabled;

+ (Class)_handlerClassForPlatformForAnnotation:(id)arg1;
+ (BOOL)allowsDragging;
+ (BOOL)allowsDraggingOfAnnotation:(id)arg1;
+ (struct CGRect)annotationRectangleForDraggingBounds:(struct CGRect)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(struct CGPoint)arg4;
+ (id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2;
- (void).cxx_destruct;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (BOOL)alwaysLockAspectRatio;
- (BOOL)canLockAspectRatio;
- (BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)lockAspectRatioByDefault;
- (struct CGPoint)modelPointFromPointInWindow:(struct CGPoint)arg1;
- (double)naturalAspectRatioForAnnotation;
- (struct CGSize)naturalSizeForAnnotation;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1 options:(unsigned long long)arg2;
- (struct CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler
{
}

+ (BOOL)allowsDraggingOfAnnotation:(id)arg1;
- (BOOL)alwaysLockAspectRatio;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGSize)naturalSizeForAnnotation;

@end

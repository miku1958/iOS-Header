//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler
{
    struct CGPoint _lastMungedPositionInModel;
}

@property struct CGPoint lastMungedPositionInModel; // @synthesize lastMungedPositionInModel=_lastMungedPositionInModel;

- (struct CGRect)_rectForModifiedRotatedRect:(struct CGRect)arg1 withOriginal:(struct CGRect)arg2 andRotation:(double)arg3;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint)arg1;
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1 options:(unsigned long long)arg2;

@end


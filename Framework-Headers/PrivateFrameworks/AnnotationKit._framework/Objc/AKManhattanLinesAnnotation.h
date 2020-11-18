//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@class NSArray;

@interface AKManhattanLinesAnnotation : AKRectangularShapeAnnotation
{
    NSArray *_pathPoints;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property (strong) NSArray *pathPoints; // @synthesize pathPoints=_pathPoints;
@property struct CGPoint startPoint; // @synthesize startPoint=_startPoint;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)translateBy:(struct CGPoint)arg1;

@end

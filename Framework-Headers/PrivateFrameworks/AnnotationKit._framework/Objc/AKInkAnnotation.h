//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class NSString, PKDrawing;

@interface AKInkAnnotation : AKAnnotation <AKRectangularAnnotationProtocol>
{
    PKDrawing *_drawing;
    struct CGSize _drawingSize;
    struct CGRect _rectangle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property struct CGSize drawingSize; // @synthesize drawingSize=_drawingSize;
@property (readonly) unsigned long long hash;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (struct CGRect)hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (BOOL)shouldBurnIn;
- (void)translateBy:(struct CGPoint)arg1;

@end


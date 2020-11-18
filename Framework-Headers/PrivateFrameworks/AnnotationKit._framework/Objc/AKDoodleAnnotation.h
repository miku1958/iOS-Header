//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRotatableAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKStrokedAnnotationProtocol-Protocol.h>

@class NSString, UIBezierPath, UIColor;

@interface AKDoodleAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol>
{
    BOOL _dashed;
    BOOL _hasShadow;
    BOOL _pathIsPrestroked;
    BOOL _pathIsDot;
    double _rotationAngle;
    double _strokeWidth;
    UIColor *_strokeColor;
    long long _brushStyle;
    UIBezierPath *_path;
    struct CGRect _rectangle;
}

@property (getter=brushStyle) long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property (getter=isDashed) BOOL dashed; // @synthesize dashed=_dashed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property (readonly) unsigned long long hash;
@property (strong) UIBezierPath *path; // @synthesize path=_path;
@property BOOL pathIsDot; // @synthesize pathIsDot=_pathIsDot;
@property BOOL pathIsPrestroked; // @synthesize pathIsPrestroked=_pathIsPrestroked;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
@property double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property (strong) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
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
- (void)translateBy:(struct CGPoint)arg1;

@end

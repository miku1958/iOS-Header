//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKFlippableAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRotatableAnnotationProtocol-Protocol.h>

@class NSString, UIImage;

@interface AKImageAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKFlippableAnnotationProtocol>
{
    BOOL _hasShadow;
    BOOL _verticallyFlipped;
    BOOL _horizontallyFlipped;
    UIImage *_image;
    double _rotationAngle;
    struct CGRect _rectangle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property (readonly) unsigned long long hash;
@property BOOL horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property (strong) UIImage *image; // @synthesize image=_image;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
@property double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property (readonly) Class superclass;
@property BOOL verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)translateBy:(struct CGPoint)arg1;

@end


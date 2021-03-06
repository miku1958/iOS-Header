//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKStrokedAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class NSData, NSString;

@interface AKLoupeAnnotation : AKStrokedAnnotation <AKRectangularAnnotationProtocol>
{
    double _magnification;
    NSData *_imageData;
    struct CGRect _rectangle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property double magnification; // @synthesize magnification=_magnification;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (id)copyWithZone:(struct _NSZone *)arg1;
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


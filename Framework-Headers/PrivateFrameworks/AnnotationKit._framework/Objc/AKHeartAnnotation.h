//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

#import <AnnotationKit/AKFlippableAnnotationProtocol-Protocol.h>

@class NSString;

@interface AKHeartAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>
{
    BOOL _verticallyFlipped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL horizontallyFlipped;
@property (readonly) Class superclass;
@property BOOL verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)translateBy:(struct CGPoint)arg1;

@end


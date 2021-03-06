//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@interface AKRedactionRectAnnotation : AKRectangularShapeAnnotation
{
    BOOL _isOpaque;
    BOOL _isHighlighted;
}

@property BOOL isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property BOOL isOpaque; // @synthesize isOpaque=_isOpaque;

+ (BOOL)supportsSecureCoding;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (BOOL)shouldBurnIn;

@end


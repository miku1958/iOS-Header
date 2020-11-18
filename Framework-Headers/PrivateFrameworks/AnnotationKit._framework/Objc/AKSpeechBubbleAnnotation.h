//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKThoughtBubbleAnnotation.h>

@interface AKSpeechBubbleAnnotation : AKThoughtBubbleAnnotation
{
    double _pointyBitBaseWidthAngle;
}

@property double pointyBitBaseWidthAngle; // @synthesize pointyBitBaseWidthAngle=_pointyBitBaseWidthAngle;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;

@end


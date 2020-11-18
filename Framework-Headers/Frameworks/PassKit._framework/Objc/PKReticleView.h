//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface PKReticleView : UIView
{
    CAShapeLayer *_shapeLayer;
    struct CGPath *_bouncePathSquare;
    struct CGPath *_bouncePathRectangle;
    struct CGColor *_shadowColorDefault;
    struct CGColor *_shadowColorSuccess;
    struct CGColor *_shadowColorFailure;
}

+ (Class)layerClass;
- (struct CGPath *)_createReticlePathForPoints:(struct CGPoint *)arg1;
- (struct CGPoint *)_makeSanitizedCorners:(struct CGPoint *)arg1;
- (void)blinkForSuccess:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)positionWithCorners:(struct CGPoint *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _MKBezierPathView : UIView
{
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

+ (struct CGPath *)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithOvalInSize:(struct CGSize)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFillColor:(id)arg1;
- (void)setPath:(struct CGPath *)arg1;
- (void)setPath:(struct CGPath *)arg1 duration:(double)arg2;
- (void)setStrokeColor:(id)arg1 width:(double)arg2;

@end

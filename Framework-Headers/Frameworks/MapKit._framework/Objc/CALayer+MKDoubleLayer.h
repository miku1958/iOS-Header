//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (MKDoubleLayer)

@property (readonly, strong, nonatomic) CALayer *_mapKit_mapLayer;
@property (readonly, strong, nonatomic) CALayer *currentLayer;

- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
- (struct CGPoint)convertDoublePoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertDoublePoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (struct CGRect)convertDoubleRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (struct CGRect)convertDoubleRect:(struct CGRect)arg1 toLayer:(id)arg2;
- (struct CGRect)doubleBounds;
- (struct CGPoint)doublePosition;
- (BOOL)getPresentationValue:(id *)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;
- (BOOL)getPresentationValue:(id *)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
- (void)setDoubleBounds:(struct CGRect)arg1;
- (void)setDoublePosition:(struct CGPoint)arg1;
@end


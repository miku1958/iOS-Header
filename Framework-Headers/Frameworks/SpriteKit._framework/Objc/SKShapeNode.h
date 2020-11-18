//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class SKShader, SKTexture, UIColor;

@interface SKShapeNode : SKNode
{
    struct SKCShapeNode *_skcShapeNode;
}

@property (nonatomic, getter=isAntialiased) BOOL antialiased;
@property (nonatomic) long long blendMode;
@property (strong, nonatomic) UIColor *fillColor;
@property (strong, nonatomic) SKShader *fillShader;
@property (strong, nonatomic) SKTexture *fillTexture;
@property (nonatomic) double glowWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (readonly, nonatomic) double lineLength;
@property (nonatomic) double lineWidth;
@property (nonatomic) double miterLimit;
@property (nonatomic) const struct CGPath *path;
@property (nonatomic) double renderQualityRatio;
@property (strong, nonatomic) UIColor *strokeColor;
@property (strong, nonatomic) SKShader *strokeShader;
@property (strong, nonatomic) SKTexture *strokeTexture;

+ (id)shapeNodeWithCircleOfRadius:(double)arg1;
+ (id)shapeNodeWithEllipseInRect:(struct CGRect)arg1;
+ (id)shapeNodeWithEllipseOfSize:(struct CGSize)arg1;
+ (id)shapeNodeWithPath:(struct CGPath *)arg1;
+ (id)shapeNodeWithPath:(struct CGPath *)arg1 centered:(BOOL)arg2;
+ (id)shapeNodeWithPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
+ (id)shapeNodeWithRect:(struct CGRect)arg1;
+ (id)shapeNodeWithRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)shapeNodeWithRectOfSize:(struct CGSize)arg1;
+ (id)shapeNodeWithRectOfSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
+ (id)shapeNodeWithSplinePoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
+ (id)shapeNodeWithTriangleA:(struct CGPoint)arg1 B:(struct CGPoint)arg2 C:(struct CGPoint)arg3;
- (void)_didMakeBackingNode;
- (void)_initialize;
- (struct SKCNode *)_makeBackingNode;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;

@end


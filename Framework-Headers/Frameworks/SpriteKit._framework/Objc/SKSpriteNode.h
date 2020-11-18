//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

#import <SpriteKit/SKWarpable-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString, SKLightNode, SKShader, SKTexture, SKWarpGeometry, UIColor;

@interface SKSpriteNode : SKNode <SKWarpable>
{
    struct SKCSpriteNode *_skcSpriteNode;
    SKLightNode *_light;
    BOOL _shouldRepeatTexture;
}

@property (nonatomic) struct CGPoint anchorPoint;
@property (copy, nonatomic) NSDictionary *attributeValues; // @dynamic attributeValues;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGRect centerRect;
@property (strong, nonatomic) UIColor *color;
@property (nonatomic) double colorBlendFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int lightingBitMask;
@property (strong, nonatomic) SKTexture *normalTexture;
@property (nonatomic) struct CGSize repeatTextureSize;
@property (strong, nonatomic) SKShader *shader;
@property (nonatomic) unsigned int shadowCastBitMask;
@property (nonatomic) unsigned int shadowedBitMask;
@property (nonatomic) BOOL shouldRepeatTexture; // @synthesize shouldRepeatTexture=_shouldRepeatTexture;
@property (nonatomic) struct CGSize size;
@property (nonatomic) long long subdivisionLevels;
@property (readonly) Class superclass;
@property (strong, nonatomic) SKTexture *texture;
@property (strong, nonatomic) SKWarpGeometry *warpGeometry;

+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1;
+ (id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(BOOL)arg2;
+ (id)spriteNodeWithTexture:(id)arg1;
+ (id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;
- (BOOL)_pathFromTextureToPoints:(MISSING_TYPE ***)arg1 outSize:(unsigned long long *)arg2 accuracy:(float)arg3;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugHierarchyPropertyDescriptions;
- (id)debugHierarchyValueForPropertyWithName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3;
- (BOOL)isEqualToNode:(id)arg1;
- (BOOL)repeatTexture;
- (void)scaleToSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setRepeatTexture:(BOOL)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;

@end

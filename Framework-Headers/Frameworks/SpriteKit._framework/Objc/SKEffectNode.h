//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

#import <SpriteKit/SKWarpable-Protocol.h>

@class CIFilter, NSDictionary, NSString, SKShader, SKWarpGeometry;

@interface SKEffectNode : SKNode <SKWarpable>
{
    struct SKCEffectNode *_skcEffectNode;
}

@property (copy, nonatomic) NSDictionary *attributeValues; // @dynamic attributeValues;
@property (nonatomic) long long blendMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CIFilter *filter;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKShader *shader;
@property (nonatomic) BOOL shouldCenterFilter;
@property (nonatomic) BOOL shouldEnableEffects;
@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) long long subdivisionLevels;
@property (readonly) Class superclass;
@property (strong, nonatomic) SKWarpGeometry *warpGeometry;

- (void)_didMakeBackingNode;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (struct SKCNode *)_makeBackingNode;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (id)debugHierarchyPropertyDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;

@end


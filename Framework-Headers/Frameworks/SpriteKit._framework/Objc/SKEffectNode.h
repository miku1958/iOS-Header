//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class CIFilter, SKShader;

@interface SKEffectNode : SKNode
{
    struct SKCEffectNode *_skcEffectNode;
}

@property (nonatomic) long long blendMode;
@property (strong, nonatomic) CIFilter *filter;
@property (strong, nonatomic) SKShader *shader;
@property (nonatomic) BOOL shouldCenterFilter;
@property (nonatomic) BOOL shouldEnableEffects;
@property (nonatomic) BOOL shouldRasterize;

- (void)_didMakeBackingNode;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (struct SKCNode *)_makeBackingNode;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSArray, SKAction;

@interface NTKCollectionNode : SKNode
{
    NSArray *_nodes;
    SKAction *_appearAction;
    SKAction *_disappearAction;
    CDUnknownBlockType _animateBlock;
    double _radius;
}

@property (copy, nonatomic) CDUnknownBlockType animateBlock; // @synthesize animateBlock=_animateBlock;
@property (strong, nonatomic) SKAction *appearAction; // @synthesize appearAction=_appearAction;
@property (strong, nonatomic) SKAction *disappearAction; // @synthesize disappearAction=_disappearAction;
@property (strong, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property (nonatomic) double radius; // @synthesize radius=_radius;

+ (id)hours12;
+ (id)hours12ZeusWithFont:(long long)arg1;
+ (id)hours4;
+ (id)hoursChrono;
+ (float)innerRadius;
+ (id)labels30Chrono;
+ (id)labels3Chrono;
+ (id)labels3_10_90Chrono;
+ (id)labels60Chrono;
+ (id)labels6Chrono;
+ (id)labels6_10_40Chrono;
+ (id)minutesPills;
+ (id)minutesUtilitarian;
+ (float)outerRadius;
+ (id)ticks120;
+ (id)ticks240;
+ (id)ticks30Chrono;
+ (id)ticks60;
+ (id)ticks60Chrono;
+ (id)ticks60Utilitarian;
+ (id)ticks6Chrono;
+ (id)ticksColorAnalog;
+ (id)ticksPills;
- (void).cxx_destruct;
- (void)appearAnimated;
- (void)applyAppearanceFraction:(double)arg1;
- (void)applyAppearanceFraction:(double)arg1 inverted:(BOOL)arg2;
- (void)createSubNodes;
- (void)disappearAnimated;
- (void)fade:(double)arg1 inverted:(BOOL)arg2;
- (void)fadeAndScale:(double)arg1;
- (void)fadeNodes:(double)arg1;
- (void)fadeNodes:(double)arg1 except:(id)arg2;
- (id)init;
- (id)initWithName:(id)arg1 nodes:(id)arg2 animateBlock:(CDUnknownBlockType)arg3;
- (void)scaleNodes:(double)arg1;
- (void)scaleNodes:(double)arg1 andResetNodesAtIndices:(id)arg2;
- (void)scaleNodes:(id)arg1 fraction:(double)arg2;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 rotate:(BOOL)arg3 round:(BOOL)arg4;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 scale:(double)arg3 rotate:(BOOL)arg4 round:(BOOL)arg5;

@end


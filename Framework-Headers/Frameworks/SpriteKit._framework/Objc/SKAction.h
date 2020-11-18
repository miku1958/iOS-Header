//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>
#import <SpriteKit/NSCopying-Protocol.h>

@interface SKAction : NSObject <NSCopying, NSCoding>
{
    struct SKCAction *_caction;
}

@property (nonatomic) double duration;
@property (nonatomic) BOOL finished;
@property (nonatomic) double speed;
@property (nonatomic) CDUnknownBlockType timingFunction;
@property (nonatomic) long long timingMode;

+ (id)actionNamed:(id)arg1;
+ (id)actionNamed:(id)arg1 duration:(double)arg2;
+ (id)actionNamed:(id)arg1 fromURL:(id)arg2;
+ (id)actionNamed:(id)arg1 fromURL:(id)arg2 duration:(double)arg3;
+ (void)addActionsToCachedActionTable:(id)arg1;
+ (id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2;
+ (id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
+ (id)applyAngularImpulse:(double)arg1 duration:(double)arg2;
+ (id)applyForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2 duration:(double)arg3;
+ (id)applyForce:(struct CGVector)arg1 duration:(double)arg2;
+ (id)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2 duration:(double)arg3;
+ (id)applyImpulse:(struct CGVector)arg1 duration:(double)arg2;
+ (id)applyTorque:(double)arg1 duration:(double)arg2;
+ (id)changeChargeBy:(float)arg1 duration:(double)arg2;
+ (id)changeChargeTo:(float)arg1 duration:(double)arg2;
+ (id)changeMassBy:(float)arg1 duration:(double)arg2;
+ (id)changeMassTo:(float)arg1 duration:(double)arg2;
+ (id)changeObstructionBy:(float)arg1 duration:(double)arg2;
+ (id)changeObstructionTo:(float)arg1 duration:(double)arg2;
+ (id)changeOcclusionBy:(float)arg1 duration:(double)arg2;
+ (id)changeOcclusionTo:(float)arg1 duration:(double)arg2;
+ (id)changePlaybackRateBy:(float)arg1 duration:(double)arg2;
+ (id)changePlaybackRateTo:(float)arg1 duration:(double)arg2;
+ (id)changeReverbBy:(float)arg1 duration:(double)arg2;
+ (id)changeReverbTo:(float)arg1 duration:(double)arg2;
+ (id)changeVolumeBy:(float)arg1 duration:(double)arg2;
+ (id)changeVolumeTo:(float)arg1 duration:(double)arg2;
+ (void)clearActionTableCache;
+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(double)arg2 duration:(double)arg3;
+ (id)colorizeWithColorBlendFactor:(double)arg1 duration:(double)arg2;
+ (void)convertAction:(id)arg1 toDuration:(double)arg2;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;
+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)falloffBy:(float)arg1 duration:(double)arg2;
+ (id)falloffTo:(float)arg1 duration:(double)arg2;
+ (id)findNamedActionInBundle:(id)arg1;
+ (id)followPath:(struct CGPath *)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath *)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 speed:(double)arg4;
+ (id)followPath:(struct CGPath *)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath *)arg1 speed:(double)arg2;
+ (id)group:(id)arg1;
+ (id)hide;
+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
+ (id)moveBY:(struct CGVector)arg1 duration:(double)arg2;
+ (id)moveBy:(struct CGVector)arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 duration:(double)arg2;
+ (id)moveToY:(double)arg1 duration:(double)arg2;
+ (id)pause;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)play;
+ (id)playSoundFileNamed:(id)arg1;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(BOOL)arg3;
+ (id)playSoundFileNamed:(id)arg1 waitForCompletion:(BOOL)arg2;
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 velocity:(double)arg3;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 velocity:(double)arg3;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)removeFromParent;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (id)resizeByWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)resizeToHeight:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)rotateByAngle:(double)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3;
+ (id)runAction:(id)arg1 onChildWithName:(id)arg2;
+ (id)runBlock:(CDUnknownBlockType)arg1;
+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXBy:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleXTo:(double)arg1 duration:(double)arg2;
+ (id)scaleXTo:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)scaleYTo:(double)arg1 duration:(double)arg2;
+ (id)sequence:(id)arg1;
+ (id)setNormalTexture:(id)arg1;
+ (id)setNormalTexture:(id)arg1 resize:(BOOL)arg2;
+ (id)setTexture:(id)arg1;
+ (id)setTexture:(id)arg1 resize:(BOOL)arg2;
+ (id)speedBy:(double)arg1 duration:(double)arg2;
+ (id)speedTo:(double)arg1 duration:(double)arg2;
+ (id)stereoPanBy:(float)arg1 duration:(double)arg2;
+ (id)stereoPanTo:(float)arg1 duration:(double)arg2;
+ (id)stop;
+ (id)strengthBy:(float)arg1 duration:(double)arg2;
+ (id)strengthTo:(float)arg1 duration:(double)arg2;
+ (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
+ (id)unhide;
+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
- (struct SKCAction *)caction;
- (void)commonInit;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)ratioForTime:(double)arg1;
- (id)reversedAction;
- (void)setCppAction:(void *)arg1;
- (id)subactions;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end

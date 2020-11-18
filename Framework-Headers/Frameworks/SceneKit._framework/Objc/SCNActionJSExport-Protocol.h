//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSArray, NSObject, NSString, SCNAction;
@protocol OS_dispatch_queue;

@protocol SCNActionJSExport <JSExport>

@property (nonatomic) double duration;
@property (nonatomic) double speed;
@property (nonatomic) CDUnknownBlockType timingFunction;
@property (nonatomic) long long timingMode;

+ (SCNAction *)customActionWithDuration:(double)arg1 actionBlock:(void (^)(SCNNode *, double))arg2;
+ (SCNAction *)fadeInWithDuration:(double)arg1;
+ (SCNAction *)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (SCNAction *)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (SCNAction *)fadeOutWithDuration:(double)arg1;
+ (SCNAction *)group:(NSArray *)arg1;
+ (SCNAction *)javaScriptActionWithScript:(NSString *)arg1 duration:(double)arg2;
+ (SCNAction *)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;
+ (SCNAction *)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (SCNAction *)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;
+ (SCNAction *)removeFromParentNode;
+ (SCNAction *)repeatAction:(SCNAction *)arg1 count:(unsigned long long)arg2;
+ (SCNAction *)repeatActionForever:(SCNAction *)arg1;
+ (SCNAction *)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;
+ (SCNAction *)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (SCNAction *)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;
+ (SCNAction *)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (SCNAction *)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(BOOL)arg5;
+ (SCNAction *)runBlock:(void (^)(SCNNode *))arg1;
+ (SCNAction *)runBlock:(void (^)(SCNNode *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
+ (SCNAction *)scaleBy:(double)arg1 duration:(double)arg2;
+ (SCNAction *)scaleTo:(double)arg1 duration:(double)arg2;
+ (SCNAction *)sequence:(NSArray *)arg1;
+ (SCNAction *)waitForDuration:(double)arg1;
+ (SCNAction *)waitForDuration:(double)arg1 withRange:(double)arg2;
- (id)copy;
- (SCNAction *)reversedAction;
@end


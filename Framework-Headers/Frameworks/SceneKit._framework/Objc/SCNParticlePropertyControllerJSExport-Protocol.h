//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, NSString, SCNNode;

@protocol SCNParticlePropertyControllerJSExport <JSExport>

@property (strong, nonatomic) CAAnimation *animation;
@property (nonatomic) double inputBias;
@property (nonatomic) long long inputMode;
@property (nonatomic) SCNNode *inputOrigin;
@property (copy, nonatomic) NSString *inputProperty;
@property (nonatomic) double inputScale;

+ (id)controllerWithAnimation:(CAAnimation *)arg1;
- (id)copy;
@end


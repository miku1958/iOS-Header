//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarKit/NSObject-Protocol.h>

@class AVTPhysicsController, NSString, SCNNode, SCNPhysicsWorld;

@protocol AVTPhysicsControllerDelegate <NSObject>
- (SCNNode *)avatarNodeForPhysicsController:(AVTPhysicsController *)arg1;
- (double)physicsController:(AVTPhysicsController *)arg1 downforceForNodeNamed:(NSString *)arg2;
- (SCNPhysicsWorld *)physicsWorldForPhysicsController:(AVTPhysicsController *)arg1;
@end

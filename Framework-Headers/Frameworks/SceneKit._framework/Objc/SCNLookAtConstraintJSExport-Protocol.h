//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNNode;

@protocol SCNLookAtConstraintJSExport <JSExport>

@property (nonatomic) BOOL gimbalLockEnabled;
@property (readonly, nonatomic) SCNNode *target;

+ (id)lookAtConstraintWithTarget:(SCNNode *)arg1;
@end


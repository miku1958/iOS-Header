//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>
#import <RunningBoard/NSCopying-Protocol.h>

@class NSString, RBProcess, RBSProcessIdentity;

@interface RBConcreteTarget : NSObject <NSCopying, BSDescriptionProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) RBProcess *process;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystem) BOOL system;

+ (id)systemTarget;
+ (id)targetWithIdentity:(id)arg1 environment:(id)arg2;
+ (id)targetWithProcess:(id)arg1 environment:(id)arg2;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createRBSTarget;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

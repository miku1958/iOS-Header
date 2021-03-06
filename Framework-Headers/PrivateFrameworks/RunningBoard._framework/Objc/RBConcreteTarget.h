//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSCopying-Protocol.h>

@class NSString, RBProcess, RBSProcessIdentity;

@interface RBConcreteTarget : NSObject <NSCopying>
{
}

@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) RBProcess *process;
@property (readonly, nonatomic, getter=isSystem) BOOL system;

+ (id)systemTarget;
+ (id)targetWithIdentity:(id)arg1 environment:(id)arg2;
+ (id)targetWithProcess:(id)arg1 environment:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createRBSTarget;
- (id)description;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKXPCForwarder : NSObject
{
    id _target;
    Class _targetClass;
}

- (void).cxx_destruct;
- (void)clearTarget;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _WebSafeAsyncForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeForwarder : NSObject
{
    id target;
    id defaultTarget;
    _WebSafeAsyncForwarder *asyncForwarder;
    long long asyncForwarderPred;
}

- (id)asyncForwarder;
- (void)clearTarget;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end


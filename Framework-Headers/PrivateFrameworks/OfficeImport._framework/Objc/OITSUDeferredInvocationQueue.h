//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUDeferredInvocationQueue : NSObject
{
    NSMutableArray *_invocations;
    id _target;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performInvocations;
- (id)prepareWithInvocationTarget:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface InvocationTrampoline : NSObject
{
    id _target;
}

@property (strong) id target; // @synthesize target=_target;

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObject : NSObject
{
    struct RetainPtr<_WKRemoteObjectRegistry> _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/_NSXPCDistantObjectWithError.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObjectWithUserInfoAndError : _NSXPCDistantObjectWithError
{
    NSDictionary *_userInfo;
}

- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 userInfo:(id)arg5 error:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;

@end


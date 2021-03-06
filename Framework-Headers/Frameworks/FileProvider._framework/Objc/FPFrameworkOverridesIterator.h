//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy
{
    NSArray *_overrides;
    CDUnknownBlockType _noSuitableModuleFoundHandler;
    unsigned long long _currentIndex;
    NSInvocation *_invocation;
}

+ (void)addOverride:(id)arg1;
+ (id)allOverrides;
+ (id)newIteratorWithNotFoundHandler:(CDUnknownBlockType)arg1;
+ (id)overrideDirectoryURL;
+ (void)removeOverride:(id)arg1;
- (void).cxx_destruct;
- (void)callNextOverrides;
- (void)finish;
- (void)forwardInvocation:(id)arg1;
- (id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(CDUnknownBlockType)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject-Protocol.h>

@class NSString;

@interface NSObject <NSObject>
{
    Class isa;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_isDeallocating;
+ (BOOL)_tryRetain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)allowsWeakReference;
+ (id)autorelease;
+ (Class)class;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (id)copy;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (void)dealloc;
+ (id)debugDescription;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (unsigned long long)hash;
+ (id)init;
+ (void)initialize;
+ (CDUnknownFunctionPointerType)instanceMethodForSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)isAncestorOfObject:(id)arg1;
+ (BOOL)isEqual:(id)arg1;
+ (BOOL)isFault;
+ (BOOL)isKindOfClass:(Class)arg1;
+ (BOOL)isMemberOfClass:(Class)arg1;
+ (BOOL)isProxy;
+ (BOOL)isSubclassOfClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)mutableCopy;
+ (id)mutableCopyWithZone:(struct _NSZone *)arg1;
+ (id)new;
+ (id)performSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (oneway void)release;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (unsigned long long)retainCount;
+ (BOOL)retainWeakReference;
+ (id)self;
+ (Class)superclass;
+ (struct _NSZone *)zone;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copy;
- (void)dealloc;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFault;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isProxy;
- (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableCopy;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)self;
- (struct _NSZone *)zone;

@end


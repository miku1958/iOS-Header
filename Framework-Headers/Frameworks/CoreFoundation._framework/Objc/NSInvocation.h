//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMethodSignature;

@interface NSInvocation : NSObject
{
    void *_frame;
    void *_retdata;
    id _signature;
    id _container;
    unsigned char _retainedArgs;
    unsigned char _reserved[15];
}

@property (readonly) BOOL argumentsRetained;
@property (readonly, strong) NSMethodSignature *methodSignature;
@property SEL selector;
@property id target;

+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void *)arg2;
+ (id)invocationWithMethodSignature:(id)arg1;
+ (unsigned long long)requiredStackSizeForSignature:(id)arg1;
- (void)_addAttachedObject:(id)arg1;
- (id)_initWithMethodSignature:(id)arg1 frame:(void *)arg2 buffer:(void *)arg3 size:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)getArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)getReturnValue:(void *)arg1;
- (id)init;
- (void)invoke;
- (void)invokeSuper;
- (void)invokeUsingIMP:(CDUnknownFunctionPointerType)arg1;
- (void)invokeWithTarget:(id)arg1;
- (void)retainArguments;
- (void)setArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void *)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ROCKit/ROCKInvocationInterface-Protocol.h>

@class NSMethodSignature, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ROCKFFIStackObject : NSObject <ROCKInvocationInterface>
{
    NSMethodSignature *_methodSignature;
    CDStruct_221febe4 *_cif;
    void *_returnPointer;
    void **_argumentPointers;
}

@property (nonatomic) void **argumentPointers; // @synthesize argumentPointers=_argumentPointers;
@property (readonly, nonatomic) BOOL argumentsRetained;
@property (nonatomic) CDStruct_221febe4 *cif; // @synthesize cif=_cif;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue;
@property (strong, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;
@property (nonatomic) void *returnPointer; // @synthesize returnPointer=_returnPointer;
@property (nonatomic) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic) id target;

+ (id)invocationWithMethodSignature:(id)arg1 cif:(CDStruct_221febe4 *)arg2 returnPointer:(void *)arg3 argumentPointers:(void **)arg4;
- (void).cxx_destruct;
- (void)getArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)getReturnValue:(void *)arg1;
- (id)initWithMethodSignature:(id)arg1 cif:(CDStruct_221febe4 *)arg2 returnPointer:(void *)arg3 argumentPointers:(void **)arg4;
- (void)invoke;
- (void)invokeWithTarget:(id)arg1;
- (void)retainArguments;
- (void)setArgument:(void *)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void *)arg1;

@end


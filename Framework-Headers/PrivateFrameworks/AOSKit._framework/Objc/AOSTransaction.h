//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSKit/NSCoding-Protocol.h>

@class NSConditionLock;
@protocol OS_dispatch_queue;

@interface AOSTransaction : NSObject <NSCoding>
{
    unsigned char didSucceed;
    unsigned char didFinish;
    void *result;
    struct __CFError *error;
    CDUnknownFunctionPointerType callbackFunction;
    CDUnknownBlockType callbackBlock;
    NSObject<OS_dispatch_queue> *callbackQueue;
    void *context;
    NSConditionLock *waitLock;
    CDUnknownFunctionPointerType contextRetain;
    CDUnknownFunctionPointerType contextRelease;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isSuccessful;
- (id)result;

@end


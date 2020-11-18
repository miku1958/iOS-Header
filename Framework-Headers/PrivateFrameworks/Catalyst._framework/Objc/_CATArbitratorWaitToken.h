//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface _CATArbitratorWaitToken : NSObject
{
    _Atomic int mState;
    NSMutableDictionary *mTokenByKey;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    NSObject<OS_dispatch_group> *mGroup;
    CDUnknownBlockType mCompletionBlock;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDelegateQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performCompletionBlock;
- (void)resume;
- (void)waitForRegistrationEntry:(id)arg1 forKey:(id)arg2 exclusive:(BOOL)arg3;
- (BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;

@end


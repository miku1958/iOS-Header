//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <MediaPlayer/MPUserIdentityConsuming-Protocol.h>

@class ICUserIdentity, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
    ICUserIdentity *_userIdentity;
    NSError *_error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;

- (void).cxx_destruct;
- (void)execute;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (id)init;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURLSessionTask, VSOptional, VSStoreURLBag;

@interface VSVerificationStateResetOperation : VSAsyncOperation
{
    VSOptional *_result;
    VSStoreURLBag *_bag;
    NSURLSessionTask *_resetStateTask;
}

@property (strong, nonatomic) VSStoreURLBag *bag; // @synthesize bag=_bag;
@property (strong, nonatomic) NSURLSessionTask *resetStateTask; // @synthesize resetStateTask=_resetStateTask;
@property (strong, nonatomic) VSOptional *result; // @synthesize result=_result;

- (void).cxx_destruct;
- (void)_resetVerificationStateWithURL:(id)arg1;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;

@end


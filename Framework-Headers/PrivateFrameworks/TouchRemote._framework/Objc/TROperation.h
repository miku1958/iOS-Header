//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSObject, TRSession;
@protocol OS_dispatch_semaphore;

@interface TROperation : NSOperation
{
    TRSession *_session;
    NSDictionary *_result;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property (strong, nonatomic) TRSession *session; // @synthesize session=_session;

+ (id)userCancelledError;
- (void).cxx_destruct;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)main;

@end


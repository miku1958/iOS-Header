//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFCancelable-Protocol.h>

@class NSDate;
@protocol MFFuture, MFScheduler;

@protocol MFFuture <MFCancelable>

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isFinished) BOOL finished;

- (void)addFailureBlock:(void (^)(NSError *))arg1;
- (void)addSuccessBlock:(void (^)(id))arg1;
- (id<MFFuture>)map:(id (^)(id))arg1;
- (void)onScheduler:(id<MFScheduler>)arg1 addFailureBlock:(void (^)(NSError *))arg2;
- (void)onScheduler:(id<MFScheduler>)arg1 addSuccessBlock:(void (^)(id))arg2;
- (id<MFFuture>)onScheduler:(id<MFScheduler>)arg1 map:(id (^)(id))arg2;
- (id<MFFuture>)onScheduler:(id<MFScheduler>)arg1 recover:(id<MFFuture> (^)(NSError *))arg2;
- (id<MFFuture>)onScheduler:(id<MFScheduler>)arg1 then:(id<MFFuture> (^)(id))arg2;
- (id<MFFuture>)recover:(id<MFFuture> (^)(NSError *))arg1;
- (id)result:(id *)arg1;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id<MFFuture>)then:(id<MFFuture> (^)(id))arg1;
- (BOOL)tryCancel;
@end

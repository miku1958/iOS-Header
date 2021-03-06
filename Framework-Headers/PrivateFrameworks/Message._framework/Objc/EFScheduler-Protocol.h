//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@protocol EFCancelable;

@protocol EFScheduler <NSObject>
- (id<EFCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (void)performBlock:(void (^)(void))arg1;
- (id<EFCancelable>)performCancelableBlock:(void (^)(EFCancelationToken *))arg1;
- (void)performSyncBarrierBlock:(void (^)(void))arg1;
- (void)performSyncBlock:(void (^)(void))arg1;
- (void)performVoucherPreservingBlock:(void (^)(void))arg1;
- (id)performWithObject:(id)arg1;
@end


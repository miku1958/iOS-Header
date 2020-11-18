//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NSObject-Protocol.h>

@class EPRoutingSlipEntry;
@protocol EPServiceRegistry, EPTransactionDelegate;

@protocol EPTransaction <NSObject>

@property (weak, nonatomic) id<EPTransactionDelegate> delegate;

+ (BOOL)canRollback;
- (void)beginRollbackWithRoutingSlipEntry:(EPRoutingSlipEntry *)arg1 serviceRegistry:(id<EPServiceRegistry>)arg2;
- (void)beginTransactionWithRoutingSlipEntry:(EPRoutingSlipEntry *)arg1 serviceRegistry:(id<EPServiceRegistry>)arg2;
@end


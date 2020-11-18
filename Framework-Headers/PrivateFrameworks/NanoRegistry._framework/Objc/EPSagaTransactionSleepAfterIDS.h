//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/EPTransaction-Protocol.h>

@class NSString;
@protocol EPTransactionDelegate;

@interface EPSagaTransactionSleepAfterIDS : NSObject <EPTransaction>
{
    id<EPTransactionDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EPTransactionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)canRollback;
- (void).cxx_destruct;
- (void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;

@end


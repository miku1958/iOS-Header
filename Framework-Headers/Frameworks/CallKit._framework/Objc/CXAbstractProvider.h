//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXAbstractProviderVendorProtocol-Protocol.h>
#import <CallKit/CXActionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol CXAbstractProviderDelegate, CXAbstractProviderHostProtocol, OS_dispatch_queue;

@interface CXAbstractProvider : NSObject <CXActionDelegate, CXAbstractProviderVendorProtocol>
{
    NSMutableArray *_mutablePendingTransactions;
    NSObject<OS_dispatch_queue> *_queue;
    id<CXAbstractProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CXAbstractProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CXAbstractProviderHostProtocol> hostProtocolDelegate;
@property (readonly, nonatomic) NSMutableArray *mutablePendingTransactions; // @synthesize mutablePendingTransactions=_mutablePendingTransactions;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionInterruption;
- (id)_pendingActionWithUUID:(id)arg1;
- (void)_performAction:(id)arg1;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)_updatePendingTransactions;
- (void)actionCompleted:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (void)handleConnectionInterruption;
- (id)init;
- (void)invalidate;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)sendProviderDidBegin;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end

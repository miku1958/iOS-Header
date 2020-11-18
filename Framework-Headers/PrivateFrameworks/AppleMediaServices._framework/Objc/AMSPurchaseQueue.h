//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class AMSPurchaseProtocolHandler, AMSPurchaseQueueConfiguration, AMSURLSession, NSLock, NSMutableArray, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface AMSPurchaseQueue : NSObject <AMSBagConsumer>
{
    BOOL _isSuspeneded;
    NSOperationQueue *_backgroundQueue;
    AMSPurchaseQueueConfiguration *_config;
    NSMutableArray *_batches;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_enqueue;
    NSLock *_lock;
    AMSPurchaseProtocolHandler *_protocolHandler;
    AMSURLSession *_session;
}

@property (strong, nonatomic) NSOperationQueue *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property (strong, nonatomic) NSMutableArray *batches; // @synthesize batches=_batches;
@property (strong, nonatomic) AMSPurchaseQueueConfiguration *config; // @synthesize config=_config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *enqueue; // @synthesize enqueue=_enqueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSuspeneded; // @synthesize isSuspeneded=_isSuspeneded;
@property (strong, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property (strong, nonatomic) AMSPurchaseProtocolHandler *protocolHandler; // @synthesize protocolHandler=_protocolHandler;
@property (strong, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
- (void).cxx_destruct;
- (void)_handleNextPurchase;
- (void)_handlePurchaseCompleted:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)_processPurchase:(id)arg1;
- (id)_processURLRequest:(id)arg1 error:(id *)arg2;
- (id)_purchaseContextForPurchase:(id)arg1;
- (id)contextForPurchaseId:(id)arg1;
- (id)enquePurchases:(id)arg1;
- (BOOL)finishPurchaseId:(id)arg1 withError:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)setSuspended:(BOOL)arg1 logUUID:(id)arg2;

@end

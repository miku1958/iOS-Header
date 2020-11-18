//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDHTTPDevice, HMFHTTPClientConnection, HMFTimer, HMFUnfairLock, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface _HMDHTTPServerClientConnection : HMFObject
{
    NSMutableDictionary *_pendingTransactionCompletionHandlers;
    HMFUnfairLock *_lock;
    HMDHTTPDevice *_device;
    HMFHTTPClientConnection *_connection;
    NSOperationQueue *_requestOperationQueue;
    NSMutableArray *_receiveMessageRequests;
    NSOperationQueue *_transactionOperationQueue;
    HMFTimer *_lostConnectionTimer;
}

@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (strong, nonatomic) HMFHTTPClientConnection *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) HMDHTTPDevice *device; // @synthesize device=_device;
@property (readonly, nonatomic) HMFTimer *lostConnectionTimer; // @synthesize lostConnectionTimer=_lostConnectionTimer;
@property (readonly, nonatomic) NSMutableArray *receiveMessageRequests; // @synthesize receiveMessageRequests=_receiveMessageRequests;
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *transactionOperationQueue; // @synthesize transactionOperationQueue=_transactionOperationQueue;

+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_reallySendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1 forTransactionIdentifier:(id)arg2;
- (id)debugDescription;
- (id)dequeueRequest;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (void)invalidate;
- (void)queueRequest:(id)arg1;
- (CDUnknownBlockType)removeCompletionHandlerForTransactionIdentifier:(id)arg1;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)shortDescription;

@end

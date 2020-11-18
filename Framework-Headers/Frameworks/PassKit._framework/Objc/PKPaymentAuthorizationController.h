//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSTimer, NSXPCConnection, NSXPCListener, PKInAppPaymentService, PKPaymentAuthorizationControllerExportedObject, PKPaymentRequest;
@protocol OS_dispatch_queue, PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;

@interface PKPaymentAuthorizationController : NSObject <NSXPCListenerDelegate>
{
    BOOL _didPresent;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCListener *_listener;
    double _connectionTimeout;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSTimer *_timer;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostIdentifier;
    PKPaymentAuthorizationControllerExportedObject *_exportedObject;
    CDUnknownBlockType _presentationCompletionBlock;
}

@property (nonatomic, setter=_setPrivateDelegate:) id<PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPaymentAuthorizationControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPresent; // @synthesize didPresent=_didPresent;
@property (strong, nonatomic) PKPaymentAuthorizationControllerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property (strong, nonatomic) PKInAppPaymentService *inAppPaymentService; // @synthesize inAppPaymentService=_inAppPaymentService;
@property (strong, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property (strong, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property (copy, nonatomic) CDUnknownBlockType presentationCompletionBlock; // @synthesize presentationCompletionBlock=_presentationCompletionBlock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

+ (BOOL)canMakePayments;
+ (BOOL)canMakePaymentsUsingNetworks:(id)arg1;
+ (BOOL)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
- (void)_invokeCallbackWithSuccess:(BOOL)arg1;
- (id)_remoteObjectProxy;
- (void)_viewServiceTimerFired:(id)arg1;
- (void)dealloc;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithPaymentRequest:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;

@end

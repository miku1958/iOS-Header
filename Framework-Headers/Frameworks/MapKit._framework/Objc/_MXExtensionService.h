//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSUUID, UIViewController, _MXExtension, _MXSerialQueue;
@protocol _MXExtensionURLHandling;

@interface _MXExtensionService : NSObject
{
    _MXSerialQueue *_serialQueue;
    BOOL _didSendConnectionTerminationNotifcation;
    NSUUID *_connectionIdentifier;
    NSExtension *_realExtension;
    _MXExtension *_extensionProxy;
    unsigned long long _state;
    id<_MXExtensionURLHandling> _URLHandlingDelegate;
    struct UIViewController *_remoteViewController;
}

@property (weak, nonatomic) id<_MXExtensionURLHandling> URLHandlingDelegate; // @synthesize URLHandlingDelegate=_URLHandlingDelegate;
@property (strong, nonatomic) NSUUID *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
@property (readonly, nonatomic) _MXExtension *extensionProxy; // @synthesize extensionProxy=_extensionProxy;
@property (strong, nonatomic) NSExtension *realExtension; // @synthesize realExtension=_realExtension;
@property (strong, nonatomic) UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (readonly, nonatomic) NSUUID *serviceIdentifier;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;

+ (id)extensionCompletionQueue;
- (void).cxx_destruct;
- (void)_completeOrCancelTransaction:(BOOL)arg1;
- (void)_connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg1 Handler:(CDUnknownBlockType)arg2;
- (id)_errorForIntent:(id)arg1;
- (id)_errorForIntentResponse:(id)arg1 withExpectResponseClass:(Class)arg2;
- (id)_errorForIntentVendorContext:(id)arg1;
- (id)_handleOrConfirmIntent:(id)arg1 expectResponseClass:(Class)arg2 isHandle:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)cancelTransactionDueToTimeout;
- (void)completeTransaction;
- (id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)connectExtensionWithHandler:(CDUnknownBlockType)arg1;
- (void)connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg1 Handler:(CDUnknownBlockType)arg2;
- (void)connectUIExtensionWithHandler:(CDUnknownBlockType)arg1;
- (id)context;
- (void)dealloc;
- (id)description;
- (void)disconnectExtension;
- (id)extension;
- (void)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithExtensionProxy:(id)arg1;
- (id)intentResponseObserverProxy;
- (int)processIdentifier;
- (id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setIntentResponseObserverProxy:(id)arg1;
- (id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)stopSendingUpdatesForIntent:(id)arg1;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;

@end


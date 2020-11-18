//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <Intents/INIntentDelivererDataSource-Protocol.h>
#import <Intents/INIntentDelivererDelegate-Protocol.h>
#import <Intents/_INExtensionContextVending-Protocol.h>

@class INIntentDeliverer, NSObject, NSString;
@protocol INIntentHandlerProvidingPrivate, OS_dispatch_queue;

@interface _INExtensionContext : NSExtensionContext <INIntentDelivererDelegate, INIntentDelivererDataSource, _INExtensionContextVending>
{
    BOOL _isPrivateExtension;
    id _handlerForIntent;
    NSObject<OS_dispatch_queue> *_queue;
    id<INIntentHandlerProvidingPrivate> _extensionHandler;
    INIntentDeliverer *_intentDeliverer;
}

@property (readonly, nonatomic) id<INIntentHandlerProvidingPrivate> _extensionHandler; // @synthesize _extensionHandler;
@property (readonly, nonatomic) INIntentDeliverer *_intentDeliverer; // @synthesize _intentDeliverer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_beginTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_commonInit;
- (void)_completeTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validateExtension;
- (CDStruct_4c969caf)auditTokenForIntentDeliverer:(id)arg1;
- (oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)completeTransaction;
- (oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)confirmIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (oneway void)confirmationResponseForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 searchTerm:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (oneway void)handleIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithInputItems:(id)arg1 extension:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)initWithInputItems:(id)arg1 privateIntentHandlerProvider:(id)arg2;
- (void)intentDeliverer:(id)arg1 deliverIntent:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (oneway void)stopSendingUpdatesForIntent:(id)arg1;

@end

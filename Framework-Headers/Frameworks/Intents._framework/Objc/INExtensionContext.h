//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <Intents/INCacheableObjectManagerObserver-Protocol.h>
#import <Intents/INExtensionContextVending-Protocol.h>

@class NSString;

@interface INExtensionContext : NSExtensionContext <INCacheableObjectManagerObserver, INExtensionContextVending>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)load;
- (void)_deliverIntent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_errorHandlingHostProxy;
- (void)_processIntentResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validateExtension;
- (void)cacheableObjectManager:(id)arg1 wasToldAboutCacheableObject:(id)arg2;
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)completeTransaction;
- (oneway void)confirmIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (oneway void)confirmationResponseForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)getApplicationContextWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)handleIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (void)stopSendingUpdatesForIntent:(id)arg1;

@end


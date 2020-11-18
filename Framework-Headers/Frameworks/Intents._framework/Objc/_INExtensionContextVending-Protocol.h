//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INIntent, NSArray, NSString;
@protocol INIntentResponseObserver;

@protocol _INExtensionContextVending <NSObject>
- (oneway void)beginTransactionWithIntentIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)completeTransactionWithIntentIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)confirmIntent:(INIntent *)arg1 withCompletion:(void (^)(INIntentResponse *, NSData *, NSSet *, NSError *))arg2;
- (oneway void)getIntentParameterDefaultValue:(NSString *)arg1 forIntent:(INIntent *)arg2 completionBlock:(void (^)(NSData *, NSError *))arg3;
- (oneway void)getIntentParameterOptions:(NSString *)arg1 forIntent:(INIntent *)arg2 searchTerm:(NSString *)arg3 completionBlock:(void (^)(NSData *, NSError *))arg4;
- (oneway void)handleIntent:(INIntent *)arg1 withCompletion:(void (^)(INIntentResponse *, NSData *, NSSet *, NSError *))arg2;
- (oneway void)resolveIntentSlot:(NSString *)arg1 forIntent:(INIntent *)arg2 completionBlock:(void (^)(NSData *))arg3;
- (oneway void)resolveIntentSlots:(NSArray *)arg1 forIntent:(INIntent *)arg2 completionBlock:(void (^)(BOOL, INIntent *, NSDictionary *))arg3;

@optional
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)completeTransaction;
- (oneway void)confirmationResponseForIntent:(INIntent *)arg1 completion:(void (^)(INIntentResponse *, NSData *))arg2;
- (oneway void)getIntentParameterOptions:(NSString *)arg1 forIntent:(INIntent *)arg2 completionBlock:(void (^)(NSData *, NSError *))arg3;
- (oneway void)handleIntent:(INIntent *)arg1 completion:(void (^)(INIntentResponse *, NSData *))arg2;
- (oneway void)handleIntent:(INIntent *)arg1 completionHandler:(void (^)(INIntentResponse *, NSData *, NSError *))arg2;
- (oneway void)startSendingUpdatesForIntent:(INIntent *)arg1 toObserver:(id<INIntentResponseObserver>)arg2;
- (oneway void)stopSendingUpdatesForIntent:(INIntent *)arg1;
@end

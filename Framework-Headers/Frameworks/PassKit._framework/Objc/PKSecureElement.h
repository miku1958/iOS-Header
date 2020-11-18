//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSNumber, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKSecureElement : NSObject
{
    BOOL _deletingAllApplets;
    NSObject<OS_dispatch_source> *_deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsTimerConcurrentQueue;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsPropertyConcurrentQueue;
    NSObject<OS_dispatch_queue> *_observerConcurrentQueue;
    NSObject<OS_dispatch_queue> *_objectDisposalQueue;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL isDeletingAllApplets;
@property (readonly, nonatomic) BOOL isInRestrictedMode;
@property (readonly, nonatomic) BOOL isProductionSigned;
@property (readonly, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property (readonly, nonatomic) NSString *primaryRegionTopic;
@property (readonly, nonatomic) NSString *primarySecureElementIdentifier;
@property (readonly, nonatomic) NSArray *secureElementIdentifiers;
@property (readonly, nonatomic) unsigned long long supportedTechnologies;

+ (id)primarySecureElementIdentifier;
+ (id)secureElementIdentifiers;
- (void).cxx_destruct;
- (void)SEPPairingInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)allAppletsWithCompletion:(CDUnknownBlockType)arg1;
- (void)appletWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectToServerWithPushTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)initializeSecureElementQueuingServerConnection:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)legacyStateInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairingStateWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)queueConnectionToSeverForAppletIdentifiers:(id)arg1;
- (BOOL)queueConnectionToSeverWithPushTopic:(id)arg1;
- (void)registerObserver:(id)arg1;
- (BOOL)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)signChallenge:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signatureForAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stateInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CoreTelephonyClientDelegate-Protocol.h>
#import <Contacts/TUCallProviderManagerDelegate-Protocol.h>

@class CNContactsEnvironment, CoreTelephonyClient, NSMapTable, NSString, TUCallProviderManager;
@protocol OS_dispatch_queue;

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate>
{
    CNContactsEnvironment *_environment;
    CoreTelephonyClient *_coreTelephonyClient;
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegateToQueue;
    unsigned long long _dataSourceExclusions;
}

@property (nonatomic) unsigned long long dataSourceExclusions; // @synthesize dataSourceExclusions=_dataSourceExclusions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)channelStringFromSenderIdentity:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (BOOL)deviceSupportsGemini;
- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)badgeLabelForSenderIdentity:(id)arg1 error:(id *)arg2;
- (id)badgeLabelForSubscription:(id)arg1 error:(id *)arg2;
- (id)bestSenderIdentityForContact:(id)arg1 error:(id *)arg2;
- (id)bestSenderIdentityForFavoritesEntry:(id)arg1 error:(id *)arg2;
- (id)bestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)bestSubscriptionForContact:(id)arg1 error:(id *)arg2;
- (id)bestSubscriptionForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)channelForContact:(id)arg1 error:(id *)arg2;
- (id)channelForFavoritesEntry:(id)arg1 error:(id *)arg2;
- (id)fetchedSenderIdentitiesWithError:(id *)arg1;
- (id)geminiResultForContact:(id)arg1 error:(id *)arg2;
- (id)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(BOOL)arg2 error:(id *)arg3;
- (id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithCallProviderManager:(id)arg1;
- (id)initWithEnvironment:(id)arg1 coreTelephonyClient:(id)arg2 callProviderManager:(id)arg3;
- (BOOL)isReferencedByContactsForSenderLabelIdentifier:(id)arg1 store:(id)arg2;
- (void)providersChangedForProviderManager:(id)arg1;
- (BOOL)remapChannelIdentifier:(id)arg1 toIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)remapContactsHavingPreferredChannelIdentifier:(id)arg1 toPreferredChannelIdentifier:(id)arg2 contactStore:(id)arg3 error:(id *)arg4;
- (id)remoteBestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id *)arg3;
- (id)remoteGeminiResultForContact:(id)arg1 substituteDefaultForDangling:(BOOL)arg2 error:(id *)arg3;
- (void)removeDelegate:(id)arg1;
- (void)subscriptionInfoDidChange;

@end

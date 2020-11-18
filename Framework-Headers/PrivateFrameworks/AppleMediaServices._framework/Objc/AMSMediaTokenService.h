//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSBagConsumer_Project-Protocol.h>
#import <AppleMediaServices/AMSMediaTokenServiceProtocol-Protocol.h>

@class ACAccount, AMSMediaToken, AMSMediaTokenServiceStore, AMSMediaTokenServiceThrottler, AMSProcessInfo, AMSURLSession, NSString;
@protocol AMSBagProtocol, OS_dispatch_queue;

@interface AMSMediaTokenService : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSMediaTokenServiceProtocol>
{
    BOOL _enabled;
    BOOL _URLKnownToBeTrusted;
    AMSURLSession *_session;
    ACAccount *_account;
    id<AMSBagProtocol> _bag;
    NSString *_clientIdentifier;
    AMSProcessInfo *_clientInfo;
    NSString *_clientVersion;
    AMSMediaTokenServiceThrottler *_throttler;
    NSObject<OS_dispatch_queue> *_tokenFetchQueue;
    AMSMediaTokenServiceStore *_tokenStore;
    double _refreshPercentage;
    double _refreshTime;
}

@property (nonatomic) BOOL URLKnownToBeTrusted; // @synthesize URLKnownToBeTrusted=_URLKnownToBeTrusted;
@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (strong, nonatomic) AMSMediaToken *cachedMediaToken;
@property (readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (strong, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property (readonly, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *keychainAccessGroup;
@property (nonatomic) double refreshPercentage; // @synthesize refreshPercentage=_refreshPercentage;
@property (nonatomic) double refreshTime; // @synthesize refreshTime=_refreshTime;
@property (weak, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSMediaTokenServiceThrottler *throttler; // @synthesize throttler=_throttler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue; // @synthesize tokenFetchQueue=_tokenFetchQueue;
@property (readonly, nonatomic) AMSMediaTokenServiceStore *tokenStore; // @synthesize tokenStore=_tokenStore;

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
- (void).cxx_destruct;
- (id)_fetchBagProperties;
- (id)_fetchToken;
- (void)_refreshMediaTokenIfNeeded:(id)arg1;
- (BOOL)_shouldRefreshMediaToken:(id)arg1;
- (BOOL)_shouldReturnMediaToken:(id)arg1;
- (id)_tokenRequestWithError:(id *)arg1;
- (id)fetchMediaToken;
- (id)initWithClientIdentifier:(id)arg1 bag:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 bag:(id)arg3;
- (void)invalidateMediaToken;

@end

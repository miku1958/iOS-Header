//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOConfigChangeListenerDelegate-Protocol.h>

@class NSString;

@interface GEOMapsAuthServiceHelper : NSObject <GEOConfigChangeListenerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAuthHelper;
- (BOOL)_checkACTokenResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(BOOL)arg4;
- (BOOL)_checkMRTResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(BOOL)arg4;
- (void)_handleFeatureFlagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (BOOL)_hasMAT;
- (BOOL)_hasMRT;
- (long long)_statusCodeFromResponse:(id)arg1;
- (BOOL)_successReplacingTokensFromMRTResponseData:(id)arg1;
- (id)_tokenTypeString:(unsigned long long)arg1;
- (void)addMapsAuthDidFinishObserver:(id)arg1;
- (void)addProxyAuthHeaderOrReAuth:(id)arg1 authProxyURL:(id)arg2;
- (id)dictionaryForAuthTokenState;
- (void)doEnvironmentSwitchCheck:(id)arg1 authProxyURL:(id)arg2 suppressNotification:(BOOL)arg3;
- (void)handleSecureProxyChallenge:(id)arg1;
- (id)init;
- (void)removeMapsAuthDidFinishObserver:(id)arg1;
- (void)renewMapsAuthProxyToken:(unsigned long long)arg1 fromToken:(id)arg2 authProxyURL:(id)arg3 suppressNotification:(BOOL)arg4;
- (void)requestFeatureFlagsWithURL:(id)arg1 suppressNotification:(BOOL)arg2;
- (void)sendProxyAuthNotification:(long long)arg1;
- (void)setConnectionProxyDictionary:(id)arg1 url:(id)arg2 proxyURL:(id)arg3;
- (void)updateAuthenticatedFeatureFlagStatesWithDict:(id)arg1;
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;

@end


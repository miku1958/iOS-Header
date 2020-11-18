//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSURLSessionDataDelegate-Protocol.h>

@class NSMapTable, NSString, NSTimer, NSURLSession;
@protocol HKOrganDonationConnectionManagerDelegate;

@interface HKOrganDonationConnectionManager : NSObject <NSURLSessionDataDelegate>
{
    NSString *_refreshToken;
    BOOL _accessTokenStatus;
    long long _tokenRefreshRetryCount;
    NSMapTable *_taskQueue;
    long long _managerState;
    id<HKOrganDonationConnectionManagerDelegate> _delegate;
    NSURLSession *_defaultSession;
    NSString *_accessToken;
    NSTimer *_accessTokenInvalidationTimer;
}

@property (strong, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property (weak, nonatomic) NSTimer *accessTokenInvalidationTimer; // @synthesize accessTokenInvalidationTimer=_accessTokenInvalidationTimer;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSURLSession *defaultSession; // @synthesize defaultSession=_defaultSession;
@property (weak, nonatomic) id<HKOrganDonationConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *refreshToken;
@property (readonly) Class superclass;

+ (id)_gatewayHost;
+ (id)_host;
+ (long long)_hostConfiguration;
+ (id)_keychainQueryDictionaryForIdentifier:(id)arg1;
+ (BOOL)_organDonationDisabled;
+ (id)_port;
+ (id)_scheme;
+ (id)_tokenWithIdentifier:(id)arg1 shouldReturnData:(BOOL)arg2;
+ (BOOL)hasStoredRegistrant;
+ (BOOL)isOrganDonationRegistrationAvailable;
+ (void)openDonateLifeMicroSiteInSafari;
+ (void)organDonationSignificantDate:(CDUnknownBlockType)arg1;
+ (void)refreshOrganDonationFeatureAvailability;
+ (long long)registrationSubmissionHostConfiguration;
+ (BOOL)shouldShowStoreDemoOrganDonation;
+ (id)storeDemoModeModifiedDate;
- (void).cxx_destruct;
- (id)_base64URLEncoding:(id)arg1;
- (void)_deleteTokenWithIdentifier:(id)arg1;
- (void)_flushTokenDependentRequestsWithStatus:(long long)arg1;
- (id)_genericJSONDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_getRequestWithURL:(id)arg1 bearerToken:(id)arg2;
- (void)_handleServerErrorWithResponse:(id)arg1 originRequest:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleURLTaskError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_invalidateAccessToken:(id)arg1;
- (id)_jsonBodyPostRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3 bearerToken:(id)arg4;
- (id)_jsonObjectWithData:(id)arg1 response:(id)arg2;
- (id)_jwtWithPayload:(id)arg1 grantType:(id)arg2;
- (void)_refreshAccessTokenIfNeeded;
- (id)_refreshBearerTokenJWTWithRefreshToken:(id)arg1;
- (id)_registrationJWTWithRegistrant:(id)arg1;
- (void)_scheduleAccessTokenDependentRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_sendQueuedTokenDependentRequests;
- (void)_transitionToState:(long long)arg1;
- (void)_updateAccessTokenAndScheduleInvalidationTimer:(id)arg1 expiresIn:(double)arg2;
- (void)_upsertTokenInKeychain:(id)arg1 identifier:(id)arg2;
- (id)_urlWithPath:(id)arg1;
- (void)cleanUp;
- (void)deleteRegistrantWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)jwtHeader;
- (id)jwtPayloadWithRegistrant:(id)arg1;
- (void)openRegisterMeSiteInSafariIfAuthenticated;
- (id)payload;
- (void)refreshBearerTokenWithRefreshToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadRegistrantWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitRegistrant:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateRegistrantWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


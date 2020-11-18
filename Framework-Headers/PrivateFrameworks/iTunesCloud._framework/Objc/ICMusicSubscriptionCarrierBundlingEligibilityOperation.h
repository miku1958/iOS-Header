//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation : ICAsyncOperation
{
    NSString *_cellularProviderName;
    NSString *_mobileSubscriberCountryCode;
    NSString *_mobileSubscriberNetworkCode;
    NSString *_phoneNumber;
    NSString *_IMEI;
    BOOL _deepLink;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
}

@property (nonatomic, getter=isDeepLink) BOOL deepLink; // @synthesize deepLink=_deepLink;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

- (void).cxx_destruct;
- (void)_finishEnrichmentWithBodyDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_newDefaultRequestBodyDictionary;
- (id)_newDefaultRequestBodyDictionaryWithResponseCode:(long long)arg1 error:(id)arg2;
- (void)_sendEnrichmentRequestWithURL:(id)arg1 preflightResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendPreflightRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_sendSilentSMSRequestWithMessage:(id)arg1 number:(id)arg2 preflightResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)execute;
- (id)initWithRequestContext:(id)arg1;

@end

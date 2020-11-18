//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation
{
    BOOL _allowsFuseHeaderEnrichment;
    ICMusicSubscriptionStatusRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (nonatomic) BOOL allowsFuseHeaderEnrichment; // @synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment;
@property (readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

- (void).cxx_destruct;
- (void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2;
- (BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)execute;
- (id)initWithRequest:(id)arg1;

@end

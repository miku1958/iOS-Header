//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    NSDictionary *_buyParameters;
    BOOL _includeKeybagSyncData;
    id _parsedResponse;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2 includeKeybagSyncData:(BOOL)arg3;
- (id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2 includeKeybagSyncData:(BOOL)arg3;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;

@end

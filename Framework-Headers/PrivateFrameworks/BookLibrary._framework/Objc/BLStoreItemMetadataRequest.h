//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICBuyProductRequest, ICStoreMediaResponseItem, ICStoreRequestContext, MPMediaItem;

@interface BLStoreItemMetadataRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    MPMediaItem *_mediaItem;
    ICBuyProductRequest *_buyProductRequest;
    ICStoreMediaResponseItem *_storeMetadata;
}

- (void).cxx_destruct;
- (void)_performBuyProductRequest;
- (id)_responseDictionaryForKeyCertificateURL:(id)arg1 keyServerURL:(id)arg2;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 mediaItem:(id)arg2;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;

@end


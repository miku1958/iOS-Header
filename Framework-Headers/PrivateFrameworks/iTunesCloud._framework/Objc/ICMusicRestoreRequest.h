//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaRedownloadResponse, ICMusicRestoreRequestParameters, ICStoreRequestContext, ICStoreURLRequest;

@interface ICMusicRestoreRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    ICMediaRedownloadResponse *_response;
    ICMusicRestoreRequestParameters *_requestParameters;
}

- (void).cxx_destruct;
- (id)_serializedBodyDataWithAccountID:(id)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 parameters:(id)arg2;
- (void)performRestoreRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end


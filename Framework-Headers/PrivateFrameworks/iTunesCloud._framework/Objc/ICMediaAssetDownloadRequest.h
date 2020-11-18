//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaAVAssetDownloadOptions, ICStoreRequestContext, ICURLRequest, ICURLResponse, ICURLSession, NSData, NSURL;

@interface ICMediaAssetDownloadRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    NSURL *_assetURL;
    ICMediaAVAssetDownloadOptions *_downloadOptions;
    ICURLSession *_downloadSession;
    ICURLRequest *_request;
    ICURLResponse *_response;
    BOOL _allowsCellularData;
    BOOL _allowsCellularFallback;
    BOOL _discretionary;
    BOOL _requiresPower;
    NSURL *_destinationURL;
    NSData *_resumeData;
}

@property (nonatomic) BOOL allowsCellularData; // @synthesize allowsCellularData=_allowsCellularData;
@property (nonatomic) BOOL allowsCellularFallback; // @synthesize allowsCellularFallback=_allowsCellularFallback;
@property (copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property (nonatomic, getter=isDiscretionary) BOOL discretionary; // @synthesize discretionary=_discretionary;
@property (nonatomic) BOOL requiresPower; // @synthesize requiresPower=_requiresPower;
@property (strong, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;

- (void).cxx_destruct;
- (id)_sessionIdentifier;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)initWithRequestContext:(id)arg1 assetURL:(id)arg2 avAssetDownloadOptions:(id)arg3 resumeData:(id)arg4;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;

@end


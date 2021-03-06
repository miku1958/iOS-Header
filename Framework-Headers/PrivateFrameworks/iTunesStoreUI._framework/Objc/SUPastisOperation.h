//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class AVAssetResourceLoadingRequest, NSURL;

@interface SUPastisOperation : ISOperation
{
    NSURL *_certificateUrl;
    NSURL *_keyUrl;
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property (strong, nonatomic) NSURL *certificateURL; // @synthesize certificateURL=_certificateUrl;
@property (strong, nonatomic) NSURL *keyURL; // @synthesize keyURL=_keyUrl;
@property (strong, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;

- (id)_getAppCertWithError:(id *)arg1;
- (id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id *)arg3;
- (id)_getURIWithError:(id *)arg1;
- (void)dealloc;
- (void)run;

@end


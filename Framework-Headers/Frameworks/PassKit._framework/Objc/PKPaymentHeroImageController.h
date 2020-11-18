//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PKPaymentHeroImageManifest;
@protocol PKPaymentHeroImageControllerDelegate;

@interface PKPaymentHeroImageController : NSObject
{
    PKPaymentHeroImageManifest *_manifest;
    NSArray *_featuredNetworks;
    NSMutableArray *_currentNetworksDownloading;
    id<PKPaymentHeroImageControllerDelegate> _delegate;
    long long _watchSize;
}

@property (nonatomic) id<PKPaymentHeroImageControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long watchSize; // @synthesize watchSize=_watchSize;

+ (void)_addNetworkImageDownloadError:(id)arg1 downloadedSha1:(id)arg2;
+ (BOOL)_networkImageHasDownloadedWithError:(id)arg1;
+ (id)defaultPaymentCredentials;
- (void).cxx_destruct;
- (void)_alertDelgateOfDownloadedImageData:(id)arg1 network:(id)arg2 error:(id)arg3;
- (id)_builtInNetworksCardImageData;
- (id)_debugString;
- (void)beginDownloadingRemoteImages;
- (void)beginDownloadingRemoteImagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadRemoteImageForNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)featuredNetworksImageData;
- (struct CGSize)imageSizeForScreenSize:(struct CGSize)arg1;
- (id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2;
- (id)primaryFeaturedNetwork;

@end

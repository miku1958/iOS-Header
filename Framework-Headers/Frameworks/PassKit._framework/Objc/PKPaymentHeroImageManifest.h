//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PKPaymentWebService;

@interface PKPaymentHeroImageManifest : NSObject
{
    PKPaymentWebService *_webService;
    NSDictionary *_manifest;
    NSString *_preferredLanguage;
}

+ (id)_manifestFileNameForRegion:(id)arg1;
+ (BOOL)manifestFileExistsForRegion:(id)arg1;
+ (void)removeManifestFileForRegion:(id)arg1;
- (void).cxx_destruct;
- (void)_downloadManifestWithCompletion:(CDUnknownBlockType)arg1;
- (id)_fileNameForNetworkImageOnDisk:(id)arg1;
- (id)_readManifestDataFromDevice;
- (void)_saveManifestDataToDevice:(id)arg1;
- (BOOL)containsPaymentCredentialType:(long long)arg1;
- (id)description;
- (void)downloadRemoteManifestWithCompletion:(CDUnknownBlockType)arg1;
- (id)imageDataOnDiskForNetwork:(id)arg1;
- (id)imageInfoForNetwork:(id)arg1;
- (id)imageURLsForFeaturedNetworks:(id)arg1;
- (id)initWithWebService:(id)arg1;
- (id)initWithWebService:(id)arg1 preferredLanguage:(id)arg2;
- (id)parseData:(id)arg1;
- (id)primaryFeaturedNetwork;
- (void)setManifestWithData:(id)arg1;
- (id)sha1ForNetwork:(id)arg1;
- (id)urlForNetwork:(id)arg1;

@end


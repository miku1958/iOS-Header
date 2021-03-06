//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DCAssetFetcher : NSObject
{
}

+ (id)sharedFetcher;
- (id)_assetQuery;
- (void)_fetchAssetWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleMissingMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSuccessForQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_validateAsset:(id)arg1 error:(id *)arg2;
- (void)fetchPublicKeyAssetWithCompletion:(CDUnknownBlockType)arg1;
- (void)initiateMetadataFetchIgnoringCachesWithCompletion:(CDUnknownBlockType)arg1;

@end


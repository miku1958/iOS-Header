//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol PPInternalServerProtocol
- (void)abGroupInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)assetDefaultBundleOverridePathForAssetIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)assetMetadataRefreshIntervalSecondsWithCompletion:(void (^)(BOOL, double, NSError *))arg1;
- (void)assetVersionsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(void (^)(NSError *))arg1;
- (void)downloadAssetMetadataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)resetTrialMLModelsForNamespaceName:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)setAssetDefaultBundleOverridePath:(NSString *)arg1 assetIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(void (^)(NSError *))arg2;
- (void)setTrialUseDefaultFiles:(BOOL)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)sysdiagnoseInformationWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)trialOverridePath:(NSString *)arg1 namespaceName:(NSString *)arg2 factorName:(NSString *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, TIInputMode;

@protocol TIAssetManaging <NSObject>

@property (copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock;

- (void)addLinguisticAssetsAssertionForLanguage:(NSString *)arg1 assertionID:(NSString *)arg2 region:(NSDictionary *)arg3 clientID:(NSString *)arg4 withHandler:(void (^)(NSError *))arg5;
- (NSArray *)assetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2;
- (NSArray *)ddsAssetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2 filteredWithRegion:(BOOL)arg3;
- (void)ddsAssetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2 filteredWithRegion:(BOOL)arg3 completion:(void (^)(NSArray *))arg4;
- (NSArray *)enabledInputModes;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(NSString *)arg1 forClientID:(NSString *)arg2 withHandler:(void (^)(NSError *))arg3;
- (void)requestAssetDownloadForLanguage:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (NSArray *)topActiveRegions;
@end


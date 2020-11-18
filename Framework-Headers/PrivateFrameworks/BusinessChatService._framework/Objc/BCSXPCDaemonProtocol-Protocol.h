//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BCSBusinessItem, NSArray, NSString;

@protocol BCSXPCDaemonProtocol
- (void)_deleteInMemoryCache;
- (void)fetchBusinessItemWithBizID:(NSString *)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(BCSBusinessItem *, NSError *))arg3;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(NSString *)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(BCSBusinessItem *, BOOL, BOOL, NSError *))arg3;
- (void)fetchBusinessItemWithPhoneNumber:(NSString *)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(BCSBusinessItem *, NSError *))arg3;
- (void)fetchIsBusinessPhoneNumber:(NSString *)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)fetchSquareIconDataForBusinessItem:(BCSBusinessItem *)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)warmCacheIfNecessaryForPhoneNumbers:(NSArray *)arg1 forClientBundleID:(NSString *)arg2;
@end

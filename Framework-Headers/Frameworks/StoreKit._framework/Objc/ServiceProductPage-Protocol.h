//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@protocol ServiceProductPage <NSObject>
- (void)finishImmediately;
- (void)finishStarRatingPromptWithRating:(NSNumber *)arg1;
- (void)loadProductWithPageDictionary:(NSDictionary *)arg1;
- (void)loadProductWithRequest:(NSDictionary *)arg1;
- (void)loadProductWithURL:(NSURL *)arg1;
- (void)setAdditionalBuyParameters:(NSString *)arg1;
- (void)setAffiliateIdentifier:(NSString *)arg1;
- (void)setAskToBuy:(BOOL)arg1;
- (void)setCancelButtonTitle:(NSString *)arg1;
- (void)setClientIdentifier:(NSString *)arg1;
- (void)setPreview:(NSNumber *)arg1;
- (void)setProductPageStyle:(NSNumber *)arg1;
- (void)setPromptString:(NSString *)arg1;
- (void)setRightBarButtonTitle:(NSString *)arg1;
- (void)setScriptContextDictionary:(NSDictionary *)arg1;
- (void)setShowsRightBarButton:(BOOL)arg1;
- (void)setShowsStoreButton:(BOOL)arg1;
- (void)setupWithClientBundleID:(NSString *)arg1 bagType:(long long)arg2;
@end


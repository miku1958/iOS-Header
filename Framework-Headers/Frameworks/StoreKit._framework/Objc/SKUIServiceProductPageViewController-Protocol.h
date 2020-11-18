//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@protocol SKUIServiceProductPageViewController <NSObject>
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)finishImmediately;
- (void)finishStarRatingPromptWithRating:(NSNumber *)arg1;
- (void)loadProductWithPageDictionary:(NSDictionary *)arg1;
- (void)loadProductWithParameters:(NSDictionary *)arg1;
- (void)loadProductWithRequest:(NSDictionary *)arg1;
- (void)loadProductWithURL:(NSURL *)arg1;
- (void)setAdditionalBuyParameters:(NSString *)arg1;
- (void)setAffiliateIdentifier:(NSString *)arg1;
- (void)setAskToBuy:(NSNumber *)arg1;
- (void)setCancelButtonTitle:(NSString *)arg1;
- (void)setClientIdentifier:(NSString *)arg1;
- (void)setProductPageStyle:(NSNumber *)arg1;
- (void)setPromptString:(NSString *)arg1;
- (void)setRightBarButtonTitle:(NSString *)arg1;
- (void)setScriptContextDictionary:(NSDictionary *)arg1;
- (void)setShowsRightBarButton:(NSNumber *)arg1;
- (void)setShowsStoreButton:(NSNumber *)arg1;
@end


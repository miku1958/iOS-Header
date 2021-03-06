//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NUAdBannerView;
@protocol NUAdLayoutOptions;

@protocol NUAdProvider <NSObject>
- (void)bannerViewDidLoad:(NUAdBannerView *)arg1;
- (void)bannerViewDidUnload:(NUAdBannerView *)arg1;
- (void)bannerViewForIdentifier:(NSString *)arg1 contextProviders:(NSArray *)arg2 layoutOptions:(id<NUAdLayoutOptions>)arg3 withCompletionBlock:(void (^)(NUAdBannerView *, NSError *))arg4;
- (void)interstitialViewForContextProviders:(NSArray *)arg1 contextProvidersWithKeys:(NSDictionary *)arg2 layoutOptions:(id<NUAdLayoutOptions>)arg3 withCompletionBlock:(void (^)(ADInterstitialAd *, NSError *))arg4;
- (void)interstitialViewForContextProviders:(NSArray *)arg1 layoutOptions:(id<NUAdLayoutOptions>)arg2 withCompletionBlock:(void (^)(ADInterstitialAd *, NSError *))arg3;
- (void)prerollForContextProviders:(NSArray *)arg1 withCompletionBlock:(void (^)(NUAdBannerView *, NSURL *, unsigned long long, NSError *))arg2;
- (void)videoPlaylistAdForContextProviders:(NSArray *)arg1 withCompletionBlock:(void (^)(NUAdBannerView *, NSURL *, unsigned long long, NSError *))arg2;
@end


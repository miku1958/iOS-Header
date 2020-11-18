//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class AVAssetResourceLoader, AVAssetResourceLoadingRequest, AVAssetResourceRenewalRequest, NSURLAuthenticationChallenge;

@protocol AVAssetResourceLoaderDelegate <NSObject>

@optional
- (void)resourceLoader:(AVAssetResourceLoader *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)resourceLoader:(AVAssetResourceLoader *)arg1 didCancelLoadingRequest:(AVAssetResourceLoadingRequest *)arg2;
- (BOOL)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForLoadingOfRequestedResource:(AVAssetResourceLoadingRequest *)arg2;
- (BOOL)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForRenewalOfRequestedResource:(AVAssetResourceRenewalRequest *)arg2;
- (BOOL)resourceLoader:(AVAssetResourceLoader *)arg1 shouldWaitForResponseToAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ADAdImpressionPublicAttributes, NSError, NSString, NSURL;

@protocol ADAdSpace_RPC
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(ADAdImpressionPublicAttributes *)arg1;
- (void)_remote_close;
- (void)_remote_creativeDidFailWithError:(NSError *)arg1;
- (void)_remote_creativeWillLoad;
- (void)_remote_dismissPortraitOnlyViewController;
- (void)_remote_dismissViewController;
- (void)_remote_dismissViewControllerWithCompletionHandler:(void (^)(void))arg1;
- (void)_remote_openURL:(NSURL *)arg1;
- (void)_remote_pauseBannerMedia;
- (void)_remote_requestPortraitOnlyViewController;
- (void)_remote_requestViewControllerWithClassName:(NSString *)arg1 forAdSpaceControllerWithIdentifier:(NSString *)arg2;
- (void)_remote_resumeBannerMedia;
- (void)_remote_setRequiresFastVisibilityTestOnly:(BOOL)arg1;
- (void)_remote_updateViewControllerSupportedOrientations:(unsigned long long)arg1;
@end


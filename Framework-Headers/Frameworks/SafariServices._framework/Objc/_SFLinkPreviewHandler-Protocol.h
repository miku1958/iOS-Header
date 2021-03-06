//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/BCSActionDelegate-Protocol.h>

@class NSURL, UIViewController, _SFLinkPreviewHelper, _SFNavigationIntent, _SFNavigationResult;

@protocol _SFLinkPreviewHandler <BCSActionDelegate>
- (void)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 commitPreviewViewControllerForAction:(long long)arg2;
- (void)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2 forAction:(long long)arg3;
- (UIViewController *)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (void)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 redirectToExternalNavigationResult:(_SFNavigationResult *)arg2;
- (_SFNavigationResult *)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 resultOfLoadingURL:(NSURL *)arg2;
- (BOOL)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 supportsAction:(long long)arg2 forURL:(NSURL *)arg3;

@optional
- (BOOL)isAutomationEnabledForLinkPreviewHelper:(_SFLinkPreviewHelper *)arg1;
- (BOOL)isPrivateBrowsingEnabledForPreviewHelper:(_SFLinkPreviewHelper *)arg1;
- (void)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 addURLToReadingList:(NSURL *)arg2;
- (void)linkPreviewHelperWillBeginDownload:(_SFLinkPreviewHelper *)arg1;
- (void)linkPreviewHelperWillOpenUniveralLinkLocally:(_SFLinkPreviewHelper *)arg1;
@end


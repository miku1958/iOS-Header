//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/SFWebViewControllerDelegate-Protocol.h>

@class NSURLRequest, SFWebViewController;

@protocol SFReaderEnabledWebViewControllerDelegate <SFWebViewControllerDelegate>
- (void)webViewController:(SFWebViewController *)arg1 didClickLinkInReaderWithRequest:(NSURLRequest *)arg2;
- (void)webViewControllerDidDetermineReaderAvailability:(SFWebViewController *)arg1;
@end

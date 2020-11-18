//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSURL, UIViewController, _SFAdaptivePreviewViewController;

@protocol _SFAdaptivePreviewViewControllerDelegate <NSObject>
- (UIViewController *)adaptivePreviewViewController:(_SFAdaptivePreviewViewController *)arg1 requestLinkPreviewViewControllerWithURL:(NSURL *)arg2;

@optional
- (void)adaptivePreviewViewControllerWillDisableLinkPreview:(_SFAdaptivePreviewViewController *)arg1;
- (double)headerViewHeightForAdaptivePreviewViewController:(_SFAdaptivePreviewViewController *)arg1;
@end

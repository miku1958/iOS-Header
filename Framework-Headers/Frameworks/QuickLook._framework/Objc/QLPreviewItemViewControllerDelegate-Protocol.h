//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSError, NSString, NSURL, QLItemViewController;
@protocol QLRemotePopoverTracker;

@protocol QLPreviewItemViewControllerDelegate <NSObject>
- (long long)dragDataOwnerForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)expandContentOfPreviewItemViewController:(QLItemViewController *)arg1;
- (NSString *)loadingTextForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)previewItemViewController:(QLItemViewController *)arg1 didEnableEditMode:(BOOL)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 hasUnsavedEdits:(BOOL)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsFullScreen:(BOOL)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToOpenURL:(NSURL *)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToShowShareSheetWithPopoverTracker:(id<QLRemotePopoverTracker>)arg2 dismissCompletion:(void (^)(void))arg3;
- (void)previewItemViewControllerDidEditPreview:(QLItemViewController *)arg1 completionHandler:(void (^)(void))arg2;
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidUpdateTitle:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToDismissQuickLook:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowShareSheet:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateOverlay:(QLItemViewController *)arg1 animated:(BOOL)arg2;
- (void)previewItemViewControllerWantsUpdatePrinter:(QLItemViewController *)arg1;
@end


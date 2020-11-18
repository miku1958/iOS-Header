//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDocumentBrowserViewControllerDelegate-Protocol.h>

@class DOCConcreteLocation, NSArray, NSURL, UIBarButtonItem, UIDocumentBrowserViewController;
@protocol DOCServicePopoverTrackerProtocol;

@protocol UIDocumentBrowserViewControllerPrivateDelegate <UIDocumentBrowserViewControllerDelegate>

@optional
- (void)didDismissDocumentManager:(UIDocumentBrowserViewController *)arg1;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 commitDocumentURLPreview:(NSURL *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 commitPreviewOfDocumentAtURL:(NSURL *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickImportedURLs:(NSArray *)arg2;
- (BOOL)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldHandleLocation:(DOCConcreteLocation *)arg2;
- (BOOL)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldShowActivityViewControllerForDocumentURLs:(NSArray *)arg2 barButtonItem:(UIBarButtonItem *)arg3 popoverTracker:(id<DOCServicePopoverTrackerProtocol>)arg4;
- (BOOL)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldShowActivityViewControllerForDocumentURLs:(NSArray *)arg2 barButtonItem:(UIBarButtonItem *)arg3 popoverTracker:(id<DOCServicePopoverTrackerProtocol>)arg4 sourceIsManaged:(BOOL)arg5;
- (void)documentManagerWasCancelled:(UIDocumentBrowserViewController *)arg1;
- (void)willDismissDocumentManager:(UIDocumentBrowserViewController *)arg1;
@end


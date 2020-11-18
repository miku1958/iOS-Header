//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManager/NSObject-Protocol.h>

@class NSArray, NSError, NSURL, UIActivityViewController, UIDocumentBrowserViewController;

@protocol UIDocumentBrowserViewControllerDelegate <NSObject>

@optional
- (NSArray *)documentBrowser:(UIDocumentBrowserViewController *)arg1 applicationActivitiesForDocumentURLs:(NSArray *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didImportDocumentAtURL:(NSURL *)arg2 toDestinationURL:(NSURL *)arg3;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickDocumentURLs:(NSArray *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didRequestDocumentCreationWithHandler:(void (^)(NSURL *, unsigned long long))arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 failedToImportDocumentAtURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 willPresentActivityViewController:(UIActivityViewController *)arg2;
@end


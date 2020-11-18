//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSURL, UIDocumentPickerViewController;

@protocol UIDocumentPickerDelegate <NSObject>

@optional
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentAtURL:(NSURL *)arg2;
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentsAtURLs:(NSArray *)arg2;
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)arg1;
@end


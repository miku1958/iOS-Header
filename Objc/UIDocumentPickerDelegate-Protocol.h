//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSURL, UIDocumentPickerViewController;

@protocol UIDocumentPickerDelegate <NSObject>
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentAtURL:(NSURL *)arg2;

@optional
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)arg1;
@end


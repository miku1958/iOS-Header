//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIDocumentMenuViewController, UIDocumentPickerViewController;

@protocol UIDocumentMenuDelegate <NSObject>
- (void)documentMenu:(UIDocumentMenuViewController *)arg1 didPickDocumentPicker:(UIDocumentPickerViewController *)arg2;

@optional
- (void)documentMenuWasCancelled:(UIDocumentMenuViewController *)arg1;
@end


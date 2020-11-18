//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFMarkupAction.h>

#import <ActionKitUI/QLPreviewControllerDataSource-Protocol.h>
#import <ActionKitUI/QLPreviewControllerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString;

@interface WFMarkupAction (UIKit) <QLPreviewControllerDelegate, QLPreviewControllerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMapTable *editedFileURLsByPreviewItem;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *previewItems;
@property (readonly) Class superclass;

- (id)editedItems;
- (void)finishRunningWithError:(id)arg1;
- (void)getPreviewItemsWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)showMarkupWithItems:(id)arg1 userInterface:(id)arg2;
@end

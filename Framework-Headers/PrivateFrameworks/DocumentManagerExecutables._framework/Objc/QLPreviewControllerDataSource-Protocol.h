//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class QLPreviewController;
@protocol QLPreviewItem;

@protocol QLPreviewControllerDataSource
- (long long)numberOfPreviewItemsInPreviewController:(QLPreviewController *)arg1;
- (id<QLPreviewItem>)previewController:(QLPreviewController *)arg1 previewItemAtIndex:(long long)arg2;
@end

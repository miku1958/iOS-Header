//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class QLItem, QLPreviewItemStore;

@protocol QLPreviewItemStoreDelegate
- (BOOL)itemStore:(QLPreviewItemStore *)arg1 canEditItem:(QLItem *)arg2;
- (BOOL)itemStore:(QLPreviewItemStore *)arg1 canHandleEditedCopyOfPreviewItem:(QLItem *)arg2;
- (BOOL)itemStore:(QLPreviewItemStore *)arg1 canShareItem:(QLItem *)arg2;
- (unsigned long long)itemStore:(QLPreviewItemStore *)arg1 editedFileBehaviorForItem:(QLItem *)arg2;
- (long long)itemStore:(QLPreviewItemStore *)arg1 editingModeForPreviewItem:(QLItem *)arg2;
@end

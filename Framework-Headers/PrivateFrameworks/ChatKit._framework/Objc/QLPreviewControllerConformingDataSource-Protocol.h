//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@protocol QLPreviewControllerConforming, QLPreviewItem;

@protocol QLPreviewControllerConformingDataSource <NSObject>
- (long long)numberOfPreviewItemsInPreviewController:(id<QLPreviewControllerConforming>)arg1;
- (id<QLPreviewItem>)previewController:(id<QLPreviewControllerConforming>)arg1 previewItemAtIndex:(long long)arg2;
@end

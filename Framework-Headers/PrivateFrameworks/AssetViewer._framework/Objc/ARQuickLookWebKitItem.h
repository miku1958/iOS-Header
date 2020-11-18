//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItem.h>

#import <AssetViewer/QLPreviewItemPrivateCustomExtensionHandling-Protocol.h>

@class ARQuickLookPreviewItem, NSDictionary, NSString;
@protocol ARQuickLookWebKitItemDelegate;

@interface ARQuickLookWebKitItem : QLItem <QLPreviewItemPrivateCustomExtensionHandling>
{
    id<ARQuickLookWebKitItemDelegate> _delegate;
    NSDictionary *_additionalParameters;
    ARQuickLookPreviewItem *_previewItem;
}

@property (copy, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARQuickLookWebKitItemDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) ARQuickLookPreviewItem *previewItem; // @synthesize previewItem=_previewItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleMessageFromCustomExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 previewItem:(id)arg4;
- (id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4 previewItem:(id)arg5;
- (id)previewOptions;

@end

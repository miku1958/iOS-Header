//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

#import <NotesUI/QLPreviewItem-Protocol.h>

@class NSArray, NSString, NSURL;

@interface ICAttachmentModel (UI) <QLPreviewItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL generateAsynchronousPreviews;
@property (readonly, nonatomic) BOOL generatePreviewsDuringCloudActivity;
@property (readonly, nonatomic) CDUnknownBlockType genericBrickLargeThumbnailCreator;
@property (readonly, nonatomic) CDUnknownBlockType genericBrickThumbnailCreator;
@property (readonly, nonatomic) CDUnknownBlockType genericListThumbnailCreator;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL needToGeneratePreviews;
@property (readonly, nonatomic) BOOL needToPostProcessAttachment;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSArray *quicklookPreviewItems;
@property (readonly, nonatomic) BOOL requiresNetworkToGeneratePreview;
@property (readonly) Class superclass;

+ (struct UIImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
+ (struct UIImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2 uti:(id)arg3;
- (id)activityItems;
- (void)classifyImageInOperation:(id)arg1;
- (void)didCancelPreviewGeneratorOperation;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (struct UIImage *)fileIconWithPreferredSize:(struct CGSize)arg1;
- (void)generateOCRInOperation:(id)arg1;
- (BOOL)generatePreviewsInOperation:(id)arg1;
@end

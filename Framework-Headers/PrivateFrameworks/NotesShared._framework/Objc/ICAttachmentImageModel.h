//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (void)addLocation;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (BOOL)canConvertToHTMLForSharing;
- (BOOL)canMarkup;
- (BOOL)canSaveURL;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (BOOL)hasPreviews;
- (BOOL)hasThumbnailImage;
- (BOOL)needsFullSizePreview;
- (long long)previewImageOrientation;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (id)previewImageTypeUTI;
- (id)previewItemTitle;
- (id)saveURL;
- (BOOL)shouldCropImage;
- (BOOL)showThumbnailInNoteList;
- (struct CGSize)sizeByCroppingSize:(struct CGSize)arg1;
- (BOOL)supportsImageClassification;
- (BOOL)supportsOCR;
- (BOOL)supportsQuickLook;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

@end

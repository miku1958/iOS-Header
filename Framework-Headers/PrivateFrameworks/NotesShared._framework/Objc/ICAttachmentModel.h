//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICAttachmentModelUI-Protocol.h>
#import <NotesShared/QLPreviewItem-Protocol.h>

@class ICAttachment, NSString, NSURL;

@interface ICAttachmentModel : NSObject <ICAttachmentModelUI, QLPreviewItem>
{
    BOOL _previewGenerationOperationCancelled;
    BOOL _mergeableDataDirty;
    ICAttachment *_attachment;
}

@property (readonly, weak, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
@property (readonly, nonatomic) BOOL canMarkup;
@property (readonly, nonatomic) BOOL canSaveURL;
@property (readonly, nonatomic) BOOL canSaveURLWithOtherAttachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *hardLinkVersion;
@property (readonly, nonatomic) BOOL hasPreviews;
@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGSize intrinsicContentSize;
@property (nonatomic, getter=isMergeableDataDirty) BOOL mergeableDataDirty; // @synthesize mergeableDataDirty=_mergeableDataDirty;
@property (readonly, nonatomic) BOOL needsFullSizePreview;
@property BOOL previewGenerationOperationCancelled; // @synthesize previewGenerationOperationCancelled=_previewGenerationOperationCancelled;
@property (readonly, nonatomic) NSString *previewImageTypeUTI;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSURL *saveURL;
@property (readonly, nonatomic) BOOL showThumbnailInNoteList;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsQuickLook;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (void)deletePreviewItemHardLinkURLs;
- (void).cxx_destruct;
- (void)addLocation;
- (id)additionalIndexableTextContentInNote;
- (void)attachmentAwakeFromFetch;
- (void)attachmentDidRefresh:(BOOL)arg1;
- (void)attachmentIsDeallocating:(id)arg1;
- (id)attachmentModelType;
- (void)attachmentWillRefresh:(BOOL)arg1;
- (void)attachmentWillTurnIntoFault;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (BOOL)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (id)dataForQuickLook;
- (id)dataForTypeIdentifier:(id)arg1;
- (void)dealloc;
- (void)deleteSubAttachments;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1 withFileName:(id)arg2;
- (id)generateTemporaryURLWithExtension:(id)arg1;
- (id)hardLinkFolderPath;
- (id)initWithAttachment:(id)arg1;
- (BOOL)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (id)localizedFallbackTitle;
- (BOOL)mergeWithMergeableData:(id)arg1;
- (id)mergeableDataForCopying;
- (void)noteWillAddOrRemovePassword;
- (long long)previewImageOrientation;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (BOOL)providesStandaloneTitleForNote;
- (BOOL)providesTextContentInNote;
- (void)regenerateTextContentInNote;
- (id)searchableTextContent;
- (id)searchableTextContentForLocation;
- (id)searchableTextContentInNote;
- (short)sectionForSubAttachments;
- (BOOL)shouldCropImage;
- (BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (BOOL)shouldShowInContentInfoText;
- (BOOL)shouldSyncPreviewImageToCloud:(id)arg1;
- (id)standaloneTitleForNote;
- (id)textContentInNote;
- (id)titleForSubAttachment:(id)arg1;
- (void)undeleteSubAttachments;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(BOOL)arg1;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;
- (void)willMarkAttachmentForDeletion;
- (void)writeMergeableData;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (BOOL)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (BOOL)hasPreviews;
- (BOOL)providesStandaloneTitleForNote;
- (id)searchableTextContentInNote;
- (BOOL)shouldShowInContentInfoText;
- (id)standaloneTitleForNote;

@end


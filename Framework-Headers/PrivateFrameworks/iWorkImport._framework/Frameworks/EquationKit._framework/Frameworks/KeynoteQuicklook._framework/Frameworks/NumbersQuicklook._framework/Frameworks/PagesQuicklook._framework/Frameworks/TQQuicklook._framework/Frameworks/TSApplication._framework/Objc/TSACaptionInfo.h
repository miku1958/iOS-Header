//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPShapeInfo.h>

@class TSACaptionPlacement;

@interface TSACaptionInfo : TSWPShapeInfo
{
    TSACaptionPlacement *_placement;
    long long _childInfoKind;
}

@property (nonatomic) long long childInfoKind; // @synthesize childInfoKind=_childInfoKind;
@property (readonly, nonatomic) BOOL isHidden;
@property (strong, nonatomic) TSACaptionPlacement *placement; // @synthesize placement=_placement;

+ (BOOL)isCaption;
+ (BOOL)wantsTitleAndCaptionUUIDs;
- (void).cxx_destruct;
- (BOOL)allowedToBeDragAndDropped;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (BOOL)canAnchor;
- (BOOL)canBeAnnotatedWithPencil;
- (BOOL)canChangeWrapType;
- (id)copyDowngradedToShapeWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (BOOL)displaysInstructionalText;
- (id)exteriorTextWrap;
- (long long)getChildInfoKind;
- (id)infoForAlignAndDistribute;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)instructionalText;
- (BOOL)isAllowedInFreehandDrawings;
- (BOOL)isAllowedInGroups;
- (BOOL)isLockable;
- (BOOL)isLocked;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct CaptionInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (BOOL)preventsChangeTracking;
- (Class)repClass;
- (void)saveToArchive:(struct CaptionInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setOwningAttachment:(id)arg1;
- (BOOL)shouldShowOnCanvas:(id)arg1;
- (BOOL)storageChangesInvalidateWrap;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)supportsHyperlinks;
- (BOOL)supportsMultipleColumns;
- (BOOL)supportsVerticalTextLayoutInChildStorages;
- (BOOL)textStorageAllowsCommentsDisregardingParent;

@end


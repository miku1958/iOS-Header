//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPShapeInfo.h>

#import <TSText/TSWPTextualEquivalentProvider-Protocol.h>

@class NSArray, NSSet, NSString, TSWPTOCPartitioner, TSWPTOCSettings;

@interface TSWPTOCInfo : TSWPShapeInfo <TSWPTextualEquivalentProvider>
{
    TSWPTOCPartitioner *_partitioner;
    BOOL _shouldSyncTOCSettingsWithTOCNavigator;
    NSArray *_tocEntries;
    TSWPTOCSettings *_tocSettings;
    NSArray *_pageNumberRanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *pageNumberRanges; // @synthesize pageNumberRanges=_pageNumberRanges;
@property (readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property (nonatomic) BOOL shouldSyncTOCSettingsWithTOCNavigator; // @synthesize shouldSyncTOCSettingsWithTOCNavigator=_shouldSyncTOCSettingsWithTOCNavigator;
@property (readonly) Class superclass;
@property (strong, nonatomic, setter=setTOCEntries:) NSArray *tocEntries; // @synthesize tocEntries=_tocEntries;
@property (strong, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings; // @synthesize tocSettings=_tocSettings;
@property (readonly, nonatomic) NSArray *visibleTOCEntries;

+ (BOOL)canPartitionInline;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (id)containedStorageFormattedUsingParagraphStyle:(id)arg1;
- (id)containedStorageFormattedUsingParagraphStyles;
- (id)copyWithContext:(id)arg1;
- (Class)editorClass;
- (unsigned int)elementKind;
- (void)i_setTOCEntries:(id)arg1;
- (void)i_setTOCSettings:(id)arg1;
- (BOOL)isSelectable;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadTOCInfoMessage:(const struct TOCInfoArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)p_startingTOCIsRTLForEntries:(id)arg1;
- (id)partitioner;
- (id)referencedStyles;
- (void)regenerateStorageContent;
- (Class)repClass;
- (void)resetStorageStyles;
- (void)saveTOCInfoMessage:(struct TOCInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)textIsVertical;
- (id)textualEquivalent;
- (BOOL)wantsPositionFixedWhenCopying;

@end


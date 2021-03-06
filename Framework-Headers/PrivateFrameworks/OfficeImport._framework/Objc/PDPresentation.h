//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCDDocument.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument
{
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    struct CGSize mSlideSize;
    struct CGSize mNotesSize;
    BOOL mIsAutoPlay;
    BOOL mIsCommentsVisible;
    BOOL mIsLooping;
    BOOL mIsKiosk;
    NSMutableArray *mCommentAuthors;
}

- (void).cxx_destruct;
- (unsigned int)addBulletBlip:(id)arg1;
- (void)addCommentAuthor:(id)arg1;
- (void)addNotesMaster:(id)arg1;
- (void)addSlide:(id)arg1;
- (void)addSlideMaster:(id)arg1;
- (id)bulletBlipAtIndex:(int)arg1;
- (unsigned int)bulletBlipCount;
- (id)bulletBlips;
- (void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2;
- (void)cacheGraphicStylesForSlideBase:(id)arg1;
- (id)commentAuthorAtIndex:(unsigned long long)arg1;
- (unsigned long long)commentAuthorCount;
- (id)description;
- (void)ensureDefaultLayoutsForMasters;
- (void)flushUnusedMastersAndLayouts;
- (unsigned long long)indexOfSlide:(id)arg1;
- (id)init;
- (BOOL)isAutoPlay;
- (BOOL)isCommentsVisible;
- (BOOL)isKiosk;
- (BOOL)isLooping;
- (id)notesMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)notesMasterCount;
- (struct CGSize)notesSize;
- (void)removeUnnecessaryOverrides;
- (void)setIsAutoPlay:(BOOL)arg1;
- (void)setIsCommentsVisible:(BOOL)arg1;
- (void)setIsKiosk:(BOOL)arg1;
- (void)setIsLooping:(BOOL)arg1;
- (void)setNotesSize:(struct CGSize)arg1;
- (void)setSlideSize:(struct CGSize)arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideCount;
- (id)slideMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideMasterCount;
- (struct CGSize)slideSize;

@end


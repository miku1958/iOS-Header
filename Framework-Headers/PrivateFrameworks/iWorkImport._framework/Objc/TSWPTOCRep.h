//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPShapeRep.h>

__attribute__((visibility("hidden")))
@interface TSWPTOCRep : TSWPShapeRep
{
}

+ (id)TOCReferenceNameWithParagraphIndex:(unsigned long long)arg1;
- (BOOL)canMakePathEditable;
- (unsigned long long)charIndexAtPoint:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hyperlinkRegions;
- (unsigned long long)i_indexOfHitTOCEntryAtPoint:(struct CGPoint)arg1;
- (id)i_paragraphStyleAtPoint:(struct CGPoint)arg1;
- (id)paragraphStylesBetweenCharIndex:(unsigned long long)arg1 andCharIndex:(unsigned long long)arg2;
- (BOOL)shouldCreateKnobs;
- (BOOL)shouldShowKnobs;
- (void)showTableOfContentsEditingCollaborationHUDAtPoint:(struct CGPoint)arg1;
- (id)tocInfo;

@end


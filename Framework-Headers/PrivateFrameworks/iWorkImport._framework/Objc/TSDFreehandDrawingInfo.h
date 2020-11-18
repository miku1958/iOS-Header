//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDGroupInfo.h>

@class TSDShapeInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingInfo : TSDGroupInfo
{
    TSDShapeInfo *_freehandDrawingSpacerShape;
    double _opacity;
}

@property (readonly, nonatomic) TSDShapeInfo *freehandDrawingSpacerShape; // @synthesize freehandDrawingSpacerShape=_freehandDrawingSpacerShape;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;

- (void).cxx_destruct;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allNestedChildrenInfosForWrap;
- (id)animationFilters;
- (id)childEnumerator;
- (BOOL)containsDisallowedElementKind:(unsigned int)arg1;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (id)infosToObserveForAttachedInfo;
- (id)initWithSpacerShapeAndContext:(id)arg1 geometry:(id)arg2;
- (BOOL)isEffectivelyEmpty;
- (BOOL)isFreehandDrawing;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct GroupArchive *)arg1 unarchiver:(id)arg2 upgradeDOLC:(BOOL)arg3;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (Class)repClass;
- (void)saveToArchive:(struct GroupArchive *)arg1 archiver:(id)arg2;
- (void)setFreehandDrawingSpacerShape:(id)arg1;
- (BOOL)shouldHaveFakeShapeInfoForPersistingEmptyGroup;
- (id)tsaxTypeDescription;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

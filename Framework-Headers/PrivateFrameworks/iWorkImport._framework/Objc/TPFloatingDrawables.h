//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>

@class NSArray, NSIndexSet, NSMapTable, NSMutableDictionary, NSSet, NSString, TPDocumentRoot;

__attribute__((visibility("hidden")))
@interface TPFloatingDrawables : TSPObject <TSKDocumentObject>
{
    NSMutableDictionary *_drawablesByPageIndex;
    NSMapTable *_pageIndexByDrawable;
    NSMapTable *_tagByDrawable;
    TPDocumentRoot *_documentRoot;
}

@property (readonly, nonatomic) NSSet *allDrawables;
@property (readonly, nonatomic) unsigned long long countOfAllDrawables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property (readonly, nonatomic) BOOL hasAnyDrawables;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long maximumPageIndex;
@property (readonly, nonatomic) NSIndexSet *pageIndexesOfPagesContainingDrawables;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *swift_allDrawables;

- (void).cxx_destruct;
- (void)addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
- (void)addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
- (void)addDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
- (void)applyTag:(id)arg1 toDrawable:(id)arg2;
- (id)drawableEnumerator;
- (id)drawablesOnPageIndex:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)moveDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (id)orderedDrawablesOnPageIndex:(unsigned long long)arg1;
- (void)p_addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (void)p_removeDrawable:(id)arg1;
- (unsigned long long)pageIndexForDrawable:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (void)removeDrawable:(id)arg1 suppressDOLC:(BOOL)arg2;
- (void)removeDrawables:(id)arg1;
- (void)removeTagForDrawable:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)swift_drawablesOnPageIndex:(unsigned long long)arg1;
- (id)tagForDrawable:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

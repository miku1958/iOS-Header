//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TPMasterDrawableProvider-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>
#import <iWorkImport/TSWPHeaderFooterProvider-Protocol.h>

@class NSArray, NSEnumerator, NSMutableArray, NSString, TPDocumentRoot, TPSection, TSKDocumentRoot, TSUUUIDPath, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TPPageMaster : TSPObject <TSWPHeaderFooterProvider, TPMasterDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying>
{
    TPDocumentRoot *_documentRoot;
    TPSection *_section;
    TSWPStorage *_headerFooters[2][3];
    NSMutableArray *_masterDrawables;
    TSUUUIDPath *_pageTemplateUUIDPath;
}

@property (readonly, nonatomic) double bodyWidth;
@property (readonly, nonatomic) unsigned long long countOfMasterDrawables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSEnumerator *headerFooterFragmentEnumerator;
@property (readonly, nonatomic) NSArray *masterDrawables;
@property (readonly, nonatomic) TSUUUIDPath *pageTemplateUUIDPath; // @synthesize pageTemplateUUIDPath=_pageTemplateUUIDPath;
@property (weak, nonatomic) TPSection *section; // @synthesize section=_section;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesSingleHeaderFooter;

+ (BOOL)needsObjectUUID;
+ (id)pageMasterForPageTemplate:(id)arg1 withSection:(id)arg2;
- (void).cxx_destruct;
- (void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
- (void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)childEnumerator;
- (BOOL)containsModelObject:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (double)footerHeight;
- (id)headerFooter:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (long long)headerFooterTypeForModel:(id)arg1;
- (long long)headerFragmentIndexForModel:(id)arg1;
- (double)headerHeight;
- (void)i_addMasterDrawable:(id)arg1;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)i_createHeadersFooters:(long long)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 context:(id)arg4 mayAlreadyExist:(BOOL)arg5;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 paragraphStyle:(id)arg2 context:(id)arg3;
- (void)i_importHeaderFooter:(id)arg1 headerType:(long long)arg2 dolcContext:(id)arg3 splitHeaders:(BOOL)arg4;
- (id)i_pageTemplate;
- (void)i_setDocumentRoot:(id)arg1;
- (void)i_setHeaderFooter:(long long)arg1 storage:(id)arg2 fragmentIndex:(long long)arg3;
- (void)i_setPageTemplateUUIDPath:(id)arg1;
- (void)i_splitHeaderFooter:(id)arg1 storages:(id *)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4;
- (unsigned long long)indexOfMasterDrawable:(id)arg1;
- (id)initWithSection:(id)arg1;
- (BOOL)isHeaderFooterEmpty:(long long)arg1;
- (BOOL)isHeaderFooterEmpty:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)masterDrawablesSortedByZOrder:(id)arg1;
- (id)objectUUIDPath;
- (double)pHeightOfHeaderFooter:(long long)arg1;
- (void)p_filterParagraphStylesOnHeaderFooterStorage:(id)arg1 stylesheet:(id)arg2;
- (id)p_headerAndFooterStorages;
- (long long)p_headerFragmentIndexForTabIndex:(unsigned int)arg1 paragraphStyle:(id)arg2 bodyWidth:(double)arg3;
- (BOOL)p_isInDocument;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;
- (void)p_splitHeaderFooterByTabs:(id)arg1 storages:(id *)arg2 dolcContext:(id)arg3 bodyWidth:(double)arg4;
- (void)removeMasterDrawable:(id)arg1 suppressDOLC:(BOOL)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (id)topLevelParentInfoForInfo:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end


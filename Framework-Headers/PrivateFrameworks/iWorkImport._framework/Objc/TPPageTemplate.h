//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TPMasterDrawableProvider-Protocol.h>
#import <iWorkImport/TSDDrawableContainerInfo-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSSPropertySource-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, TPDrawablesZOrder, TSDInfoGeometry;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TPPageTemplate : TSPObject <TSKDocumentObject, TSDDrawableContainerInfo, TPMasterDrawableProvider, TSSPropertySource>
{
    BOOL _headersFootersMatchPreviousPage;
    BOOL _hideHeadersFooters;
    NSMutableArray *_masterDrawables;
    NSMutableDictionary *_placeholderDrawables;
    TPDrawablesZOrder *_drawablesZOrder;
    NSString *_name;
}

@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) unsigned long long countOfMasterDrawables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) TPDrawablesZOrder *drawablesZOrder; // @synthesize drawablesZOrder=_drawablesZOrder;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL headersFootersMatchPreviousPage; // @synthesize headersFootersMatchPreviousPage=_headersFootersMatchPreviousPage;
@property (nonatomic) BOOL hideHeadersFooters; // @synthesize hideHeadersFooters=_hideHeadersFooters;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (strong, nonatomic) NSMutableArray *masterDrawables; // @synthesize masterDrawables=_masterDrawables;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned long long numberOfDerivedPagesInDocument;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (strong, nonatomic) NSMutableDictionary *placeholderDrawables; // @synthesize placeholderDrawables=_placeholderDrawables;
@property (readonly) Class superclass;

+ (BOOL)isUserDefinedTag:(id)arg1;
+ (BOOL)needsObjectUUID;
- (void).cxx_destruct;
- (double)CGFloatValueForProperty:(int)arg1;
- (void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
- (void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
- (void)applyTag:(id)arg1 toPlaceholder:(id)arg2;
- (id)boxedObjectForProperty:(int)arg1;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (void)enumeratePlaceholderDrawablesWithBlock:(CDUnknownBlockType)arg1;
- (float)floatValueForProperty:(int)arg1;
- (double)highestScaleFactorForRenderingDrawableInfo:(id)arg1;
- (unsigned long long)indexOfMasterDrawable:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 placeholderDrawables:(id)arg3 placeholderTagsInZOrder:(id)arg4 masterDrawables:(id)arg5;
- (int)intValueForProperty:(int)arg1;
- (BOOL)isSelectable;
- (BOOL)isThemeContent;
- (BOOL)isUniqueTag:(id)arg1;
- (Class)layoutClass;
- (void)loadFromUnarchiver:(id)arg1;
- (id)masterDrawablesSortedByZOrder:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (void)removeMasterDrawable:(id)arg1 suppressDOLC:(BOOL)arg2;
- (Class)repClass;
- (void)saveToArchiver:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
- (id)tagForDrawable:(id)arg1;
- (unsigned long long)templateIndex;
- (unsigned long long)templatePreviewPageIndex;
- (id)userDefinedTagForDrawable:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end


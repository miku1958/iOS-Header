//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDContainerInfo-Protocol.h>

@class NSString, TPBodyInfo, TPDocumentRoot, TSDInfoGeometry, TSPObject;
@protocol TPPageLayoutInfoProvider, TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TPPageInfo : NSObject <TSDContainerInfo>
{
    unsigned long long _pageIndex;
    TPBodyInfo *_bodyInfo;
    TPDocumentRoot *_documentRoot;
    id<TPPageLayoutInfoProvider> _layoutInfoProvider;
}

@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) TPBodyInfo *bodyInfo; // @synthesize bodyInfo=_bodyInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, weak, nonatomic) id<TPPageLayoutInfoProvider> layoutInfoProvider; // @synthesize layoutInfoProvider=_layoutInfoProvider;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)infoForSelectionPath:(id)arg1;
- (id)initWithPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSelectable;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (Class)repClass;
- (void)setPrimitiveGeometry:(id)arg1;

@end


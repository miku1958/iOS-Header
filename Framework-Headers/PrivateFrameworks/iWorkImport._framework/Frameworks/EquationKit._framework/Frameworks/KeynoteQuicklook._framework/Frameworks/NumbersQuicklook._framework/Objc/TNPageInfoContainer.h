//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NumbersQuicklook/TSDContainerInfo-Protocol.h>

@class NSArray, NSString, TNPageController, TSDInfoGeometry, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TNPageInfoContainer : NSObject <TSDContainerInfo>
{
    TNPageController *_pageController;
    unsigned long long _pageIndex;
}

@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, weak, nonatomic) TNPageController *pageController; // @synthesize pageController=_pageController;
@property (readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2;
- (BOOL)isSelectable;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (Class)repClass;
- (void)setPrimitiveGeometry:(id)arg1;

@end

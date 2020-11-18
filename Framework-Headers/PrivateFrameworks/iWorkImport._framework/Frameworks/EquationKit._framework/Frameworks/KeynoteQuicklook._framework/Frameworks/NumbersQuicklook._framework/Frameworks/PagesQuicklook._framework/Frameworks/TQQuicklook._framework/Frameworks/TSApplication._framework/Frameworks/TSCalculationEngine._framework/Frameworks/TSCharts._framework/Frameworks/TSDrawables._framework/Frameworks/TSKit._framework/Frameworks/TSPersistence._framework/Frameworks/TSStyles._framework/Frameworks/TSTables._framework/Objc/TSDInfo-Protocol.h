//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/NSObject-Protocol.h>
#import <TSTables/TSDInfoUsingObjectPlaceholderGeometry-Protocol.h>
#import <TSTables/TSKModel-Protocol.h>
#import <TSTables/TSPCopying-Protocol.h>

@class NSObject, TSDInfoGeometry, TSKCollaboratorCursor, TSKSelectionPath, TSPObject;
@protocol TSDInfo, TSDInfoUUIDPathPrefixComponentsProvider, TSDOwningAttachment;

@protocol TSDInfo <NSObject, TSKModel, TSPCopying, TSDInfoUsingObjectPlaceholderGeometry>

@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;

- (void)clearBackPointerToParentInfoIfNeeded:(NSObject<TSDInfo> *)arg1;
- (BOOL)isSelectable;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (Class)repClass;
- (void)setPrimitiveGeometry:(TSDInfoGeometry *)arg1;

@optional
- (TSKCollaboratorCursor *)collaboratorCursorForSelectionPath:(TSKSelectionPath *)arg1;
- (BOOL)isAllowedToAddCaptionToChildInfo:(NSObject<TSDInfo> *)arg1;
- (id<TSDInfoUUIDPathPrefixComponentsProvider>)uuidPathPrefixComponentsProvider;
@end

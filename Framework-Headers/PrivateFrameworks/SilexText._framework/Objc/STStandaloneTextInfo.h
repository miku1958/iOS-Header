//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexText/TSDContainerInfo-Protocol.h>

@class NSString, STTextTangierStorage, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface STStandaloneTextInfo : NSObject <TSDContainerInfo>
{
    BOOL floatingAboveText;
    BOOL anchoredToText;
    BOOL inlineWithText;
    BOOL attachedToBodyText;
    TSDInfoGeometry *geometry;
    TSPObject<TSDOwningAttachment> *owningAttachment;
    NSObject<TSDContainerInfo> *parentInfo;
    STTextTangierStorage *_storage;
}

@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @synthesize anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText; // @synthesize attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @synthesize floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry; // @synthesize geometry;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @synthesize inlineWithText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo;
@property (readonly, nonatomic) STTextTangierStorage *storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)anchoredToText;
- (BOOL)attachedToBodyText;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (BOOL)floatingAboveText;
- (id)initWithStorage:(id)arg1;
- (BOOL)inlineWithText;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (Class)repClass;

@end


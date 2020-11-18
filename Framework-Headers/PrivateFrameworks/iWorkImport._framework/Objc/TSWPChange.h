//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>
#import <iWorkImport/TSWPTextSpanningObject-Protocol.h>

@class NSDate, NSString, TSUColor, TSWPChangeSession, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject>
{
    TSWPStorage *_parentStorage;
    int _kind;
    TSWPChangeSession *_session;
    NSDate *_date;
    NSString *_textAttributeUUIDString;
    BOOL _changeWasAddedToDocumentRoot;
}

@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (nonatomic) BOOL changeWasAddedToDocumentRoot; // @synthesize changeWasAddedToDocumentRoot=_changeWasAddedToDocumentRoot;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isDeletion;
@property (readonly, nonatomic) BOOL isInsertion;
@property (readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property (weak, nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
@property (strong, nonatomic) TSWPChangeSession *session;
@property (readonly, nonatomic) BOOL showsHiddenDeletionMarkup;
@property (readonly, nonatomic) BOOL showsMarkup;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textAttributeUUIDString;
@property (readonly, nonatomic) TSUColor *textMarkupColor;

- (void).cxx_destruct;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)i_setTextAttributeUUIDString:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (BOOL)isEquivalentToObject:(id)arg1;
- (BOOL)isFromChangeSession:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (void)resetTextAttributeUUIDString;
- (void)saveToArchiver:(id)arg1;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

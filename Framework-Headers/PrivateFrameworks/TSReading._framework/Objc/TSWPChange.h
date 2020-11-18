//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKDocumentObject-Protocol.h>
#import <TSReading/TSPCopying-Protocol.h>

@class NSDate, TSUColor, TSWPChangeSession, TSWPStorage;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying>
{
    TSWPStorage *_parentStorage;
    int _kind;
    TSWPChangeSession *_session;
    NSDate *_date;
    BOOL _hidden;
}

@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (strong, nonatomic) NSDate *date;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isDeletion;
@property (readonly, nonatomic) BOOL isInsertion;
@property (nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
@property (strong, nonatomic) TSWPChangeSession *session;
@property (readonly, nonatomic) BOOL showsHiddenDeletionMarkup;
@property (readonly, nonatomic) BOOL showsMarkup;
@property (readonly, nonatomic) TSUColor *textMarkupColor;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (BOOL)isFromChangeSession:(id)arg1;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end


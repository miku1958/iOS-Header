//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPTextualAttachment.h>

@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment
{
    TSWPStorage *_containedStorage;
    NSString *_customMarkString;
}

@property (strong, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=_containedStorage;
@property (strong, nonatomic) NSString *customMarkString; // @synthesize customMarkString=_customMarkString;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)applyMark;
- (void)checkDebug;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (unsigned long long)findCharIndex;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 wpStorage:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSearchable;
- (void)setContainedStorageParentInfoToStorage:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (id)stringEquivalent;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end


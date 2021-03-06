//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKSearchReference-Protocol.h>

@class NSArray, NSString, TSWPSelection, TSWPSmartField, TSWPStorage;
@protocol TSKAnnotation;

@interface TSWPSearchReference : NSObject <TSKSearchReference>
{
    TSWPStorage *_storage;
    TSWPSelection *_selection;
    struct _NSRange _smartFieldRange;
    BOOL _refersToSmartField;
    TSWPSmartField *_smartField;
    BOOL _autohideHighlight;
    BOOL _pulseHighlight;
    NSArray *_findHighlights;
    id<TSKAnnotation> annotation;
    struct CGPoint searchReferencePoint;
}

@property (strong, nonatomic) id<TSKAnnotation> annotation; // @synthesize annotation;
@property (nonatomic) BOOL autohideHighlight; // @synthesize autohideHighlight=_autohideHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *findHighlights; // @synthesize findHighlights=_findHighlights;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInsertionPoint;
@property (nonatomic) BOOL pulseHighlight; // @synthesize pulseHighlight=_pulseHighlight;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) BOOL refersToSmartField;
@property (nonatomic) struct CGPoint searchReferencePoint; // @synthesize searchReferencePoint;
@property (strong, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
@property (strong, nonatomic) TSWPSmartField *smartField;
@property (nonatomic) struct _NSRange smartFieldRange;
@property (readonly) Class superclass;

+ (id)searchReferenceWithStorage:(id)arg1 range:(struct _NSRange)arg2;
+ (id)searchReferenceWithStorage:(id)arg1 selection:(id)arg2;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithStorage:(id)arg1 selection:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReplaceable;
- (BOOL)isSelectable;
- (id)model;
- (void)pUpdateSelection;
- (id)searchReferenceEnd;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;
- (id)searchReferenceStart;
- (id)storage;

@end


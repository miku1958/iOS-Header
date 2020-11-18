//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKSearchReference-Protocol.h>

@class NSArray, NSString, TSDDrawableInfo, TSKDocumentRoot;
@protocol TSDCanvasSelection, TSKAnnotation;

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference>
{
    id<TSDCanvasSelection> mCanvasSelection;
    TSDDrawableInfo *mDrawableInfo;
    TSKDocumentRoot *mDocumentRoot;
    BOOL mAutohideHighlight;
    BOOL mPulseHighlight;
    NSArray *mFindHighlights;
    id<TSKAnnotation> mAnnotation;
    struct CGPoint mSearchReferencePoint;
}

@property (strong, nonatomic) id<TSKAnnotation> annotation; // @synthesize annotation=mAnnotation;
@property (nonatomic) BOOL autohideHighlight; // @synthesize autohideHighlight=mAutohideHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *findHighlights; // @synthesize findHighlights=mFindHighlights;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL pulseHighlight; // @synthesize pulseHighlight=mPulseHighlight;
@property (nonatomic) struct CGPoint searchReferencePoint; // @synthesize searchReferencePoint=mSearchReferencePoint;
@property (readonly) Class superclass;

+ (id)searchReferenceWithDrawableInfo:(id)arg1;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)drawableInfo;
- (id)initWithDrawableInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReplaceable;
- (id)model;
- (id)searchReferenceEnd;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;
- (id)searchReferenceStart;
- (id)selection;

@end


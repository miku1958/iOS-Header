//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPFootnoteHeightMeasurer-Protocol.h>

@class NSString, TPFootnoteContainerLayout, TSDLayoutController, TSULRUCache;

__attribute__((visibility("hidden")))
@interface TPFootnoteHeightMeasurer : NSObject <TSWPFootnoteHeightMeasurer>
{
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    TSDLayoutController *_layoutController;
    TSULRUCache *_footnoteLayoutCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFootnoteReferenceStorage:(id)arg1;
- (double)footnoteHeight;
- (id)initWithFootnoteMarkProvider:(id)arg1 maxFootnoteWidth:(double)arg2 maxFootnoteHeight:(double)arg3 footnoteSpacing:(double)arg4;
- (void)p_clearFootnoteLayoutCache;
- (void)removeAllFootnoteReferenceStorages;
- (void)removeFootnoteReferenceStorage:(id)arg1;
- (void)setContainerWidth:(double)arg1;
- (void)setFootnoteSpacing:(long long)arg1;

@end


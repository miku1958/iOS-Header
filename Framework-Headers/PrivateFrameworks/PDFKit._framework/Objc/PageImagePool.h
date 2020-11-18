//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PageImagePoolPrivate;

@interface PageImagePool : NSObject
{
    PageImagePoolPrivate *_private;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_drawPageImage:(int)arg1 forQuality:(int)arg2;
- (int)_expectedQualityAtPageIndex:(int)arg1;
- (BOOL)_findPageIndexNeedingUpdate:(int *)arg1 forQuality:(int *)arg2;
- (BOOL)_hasAnyImageAtPageIndex:(unsigned long long)arg1;
- (BOOL)_hasWork;
- (int)_imageCount;
- (int)_inclusivePageRangeForQuality:(int)arg1;
- (int)_maxPageRange;
- (BOOL)_pageAtIndex:(int)arg1 isOfQuality:(int)arg2;
- (id)_pageImagesForQuality:(int)arg1;
- (BOOL)_pagesInActiveRange:(int)arg1 areOfQuality:(int)arg2;
- (void)_shiftImagesAtIndex:(unsigned long long)arg1 downwards:(BOOL)arg2;
- (void)_update;
- (id)backgroundImageForPageIndex:(int)arg1;
- (void)cancelPageImagePool;
- (void)dealloc;
- (void)didInsertPageAtIndex:(unsigned long long)arg1;
- (void)didRemovePageAtIndex:(unsigned long long)arg1;
- (void)didSwapPageAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (BOOL)drawProgressCallback;
- (void)forceUpdateWithDuration:(double)arg1;
- (void)forceUpdateWithDuration:(double)arg1 forActivePageIndex:(int)arg2;
- (void)forceWebKitMainThread:(BOOL)arg1;
- (id)initWithDocumentView:(id)arg1;
- (void)setWillForceUpdateWithDuration;
- (void)updateActivePageIndex:(int)arg1;

@end


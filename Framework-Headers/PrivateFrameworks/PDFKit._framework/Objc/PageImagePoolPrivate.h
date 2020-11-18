//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDFDocumentView;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PageImagePoolPrivate : NSObject
{
    PDFDocumentView *documentView;
    int activePageIndex;
    NSMutableDictionary *highResPageImages;
    NSMutableDictionary *mediumResPageImages;
    NSMutableDictionary *lowResPageImages;
    NSObject<OS_dispatch_queue> *workQueue;
    _Atomic BOOL willForceUpdateWork;
    _Atomic int forcedWorkCount;
    NSObject<OS_dispatch_group> *forceUpdateWorkGroup;
    _Atomic BOOL isQueuedForWork;
    BOOL hasReduceTransparency;
    int pageRangeHighRes;
    int pageRangeMediumRes;
    int pageRangeLowRes;
    int pageResolutionHighRes;
    int pageResolutionMediumRes;
    int pageResolutionLowRes;
    _Atomic BOOL isCancled;
    BOOL forceUseMainThread;
}

- (void).cxx_destruct;

@end


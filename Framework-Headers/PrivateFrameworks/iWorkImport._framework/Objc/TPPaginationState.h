//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TPPageIndexPath, TPSection, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TPPaginationState : NSObject
{
    TSWPStorage *_bodyStorage;
    BOOL _doingPagination;
    BOOL _allowParagraphMetrics;
    TPPageIndexPath *_pageIndexPath;
    unsigned long long _documentPageIndex;
    void *_bodyLayoutState;
    unsigned long long _bodyCharIndex;
    unsigned long long _footnoteIndex;
    unsigned long long _lastLaidOutSectionIndex;
}

@property (nonatomic) BOOL allowParagraphMetrics; // @synthesize allowParagraphMetrics=_allowParagraphMetrics;
@property (nonatomic) unsigned long long bodyCharIndex; // @synthesize bodyCharIndex=_bodyCharIndex;
@property (nonatomic) void *bodyLayoutState; // @synthesize bodyLayoutState=_bodyLayoutState;
@property (readonly, nonatomic) unsigned long long documentPageIndex; // @synthesize documentPageIndex=_documentPageIndex;
@property (nonatomic) BOOL doingPagination; // @synthesize doingPagination=_doingPagination;
@property (nonatomic) unsigned long long footnoteIndex; // @synthesize footnoteIndex=_footnoteIndex;
@property (readonly, nonatomic) BOOL isPaginationComplete;
@property (readonly, nonatomic) unsigned long long lastLaidOutDocumentPageIndex;
@property (readonly, nonatomic) unsigned long long lastLaidOutSectionIndex; // @synthesize lastLaidOutSectionIndex=_lastLaidOutSectionIndex;
@property (readonly, nonatomic) BOOL onLastSection;
@property (readonly, nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) TPPageIndexPath *pageIndexPath; // @synthesize pageIndexPath=_pageIndexPath;
@property (readonly, weak, nonatomic) TPSection *section;
@property (readonly, nonatomic) struct _NSRange sectionCharRange;
@property (readonly, nonatomic) unsigned long long sectionIndex;

- (void).cxx_destruct;
- (void)advancePageIndex;
- (void)advanceSectionIndex;
- (void)backUpToPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2;
- (id)initWithBodyStorage:(id)arg1;
- (BOOL)isPaginationCompleteThroughDocumentPageIndex:(unsigned long long)arg1;
- (BOOL)isPaginationCompleteUpToDocumentPageIndex:(unsigned long long)arg1;
- (void)restartPaginationFromFirstPage;
- (void)restartPaginationFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2;
- (void)setDocumentPageIndex:(unsigned long long)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;

@end


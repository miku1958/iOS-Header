//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, UIPDFDocument;

__attribute__((visibility("hidden")))
@interface UIPDFPageImageCache : NSObject
{
    UIPDFDocument *_document;
    unsigned long long _lookAhead;
    double _lookAheadResolution;
    unsigned long long _jobCount;
    id *_jobsPrioritized;
    unsigned long long _nextJobIndex;
    unsigned long long _pageCount;
    id *_jobsByPage;
    NSOperationQueue *_renderQueue;
    struct os_unfair_lock_s _lock;
    int jobsComplete;
}

@property (readonly) UIPDFDocument *document; // @synthesize document=_document;
@property (readonly) unsigned long long lookAhead; // @synthesize lookAhead=_lookAhead;
@property (readonly) double lookAheadResolution; // @synthesize lookAheadResolution=_lookAheadResolution;
@property (readonly) unsigned long long pageCount; // @synthesize pageCount=_pageCount;

- (void)addRenderJob:(id)arg1;
- (void)cacheImageOfPage:(unsigned long long)arg1 maxSize:(struct CGSize)arg2;
- (void)cancelPendingRenderOperations;
- (void)cancelPendingRenderOperationsForTarget:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (void)deliverImageOfPage:(unsigned long long)arg1 maxSize:(struct CGSize)arg2 quality:(BOOL *)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)getImageIfAvailableForPage:(unsigned long long)arg1;
- (int)getRenderQueueJobsCount;
- (id)initWithDocument:(id)arg1;
- (id)initWithDocument:(id)arg1 cacheCount:(unsigned long long)arg2 lookAhead:(unsigned long long)arg3 withLookAheadResolution:(double)arg4;

@end


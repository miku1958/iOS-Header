//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDeflatedFeedGroup, FCFeedGroup, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportPersistenceGap;

@interface FCFeedViewportExpandPersistenceGapOperation : FCOperation
{
    BOOL _cachedOnly;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedViewportPersistenceGap *_gap;
    FCFeedViewportBookmark *_bookmark;
    unsigned long long _gapExpansionDirection;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _expandGapCompletionHandler;
    unsigned long long _indexOfGroupToInflate;
    FCDeflatedFeedGroup *_groupToInflate;
    FCFeedGroup *_inflatedGroup;
}

@property (copy, nonatomic) FCFeedViewportBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property (nonatomic) BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property (strong, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property (copy, nonatomic) CDUnknownBlockType expandGapCompletionHandler; // @synthesize expandGapCompletionHandler=_expandGapCompletionHandler;
@property (copy, nonatomic) FCFeedViewportPersistenceGap *gap; // @synthesize gap=_gap;
@property (nonatomic) unsigned long long gapExpansionDirection; // @synthesize gapExpansionDirection=_gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy; // @synthesize gapExpansionPolicy=_gapExpansionPolicy;
@property (strong, nonatomic) FCDeflatedFeedGroup *groupToInflate; // @synthesize groupToInflate=_groupToInflate;
@property (nonatomic) unsigned long long indexOfGroupToInflate; // @synthesize indexOfGroupToInflate=_indexOfGroupToInflate;
@property (strong, nonatomic) FCFeedGroup *inflatedGroup; // @synthesize inflatedGroup=_inflatedGroup;
@property (strong, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end


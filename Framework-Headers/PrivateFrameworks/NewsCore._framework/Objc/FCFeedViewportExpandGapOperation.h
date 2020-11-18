//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedDescriptor, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportDiff;
@protocol FCFeedElement;

@interface FCFeedViewportExpandGapOperation : FCOperation
{
    BOOL _cachedOnly;
    BOOL _offlineMode;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    id<FCFeedElement> _gapElement;
    unsigned long long _desiredHeadlineCount;
    FCFeedViewportBookmark *_bookmark;
    unsigned long long _gapExpansionDirection;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _expandGapCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_resultDiff;
}

@property (copy, nonatomic) FCFeedViewportBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property (nonatomic) BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property (strong, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property (nonatomic) unsigned long long desiredHeadlineCount; // @synthesize desiredHeadlineCount=_desiredHeadlineCount;
@property (copy, nonatomic) CDUnknownBlockType expandGapCompletionHandler; // @synthesize expandGapCompletionHandler=_expandGapCompletionHandler;
@property (strong, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property (copy, nonatomic) id<FCFeedElement> gapElement; // @synthesize gapElement=_gapElement;
@property (nonatomic) unsigned long long gapExpansionDirection; // @synthesize gapExpansionDirection=_gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy; // @synthesize gapExpansionPolicy=_gapExpansionPolicy;
@property BOOL offlineMode; // @synthesize offlineMode=_offlineMode;
@property (strong, nonatomic) FCFeedViewportDiff *resultDiff; // @synthesize resultDiff=_resultDiff;
@property (strong, nonatomic) FCFeedViewport *resultViewport; // @synthesize resultViewport=_resultViewport;
@property (strong, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;

- (void).cxx_destruct;
- (id)_groupEmitterWithIdentifier:(id)arg1;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end


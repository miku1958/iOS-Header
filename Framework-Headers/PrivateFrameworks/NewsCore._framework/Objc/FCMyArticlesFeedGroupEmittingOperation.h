//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSSet;
@protocol FCHeadlineClusterOrdering, FCHeadlineClustering;

@interface FCMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    id<FCHeadlineClustering> _headlineClusterer;
    id<FCHeadlineClusterOrdering> _headlineClusterOrderer;
    NSSet *_emittableGroupTypes;
}

@property (strong, nonatomic) NSSet *emittableGroupTypes; // @synthesize emittableGroupTypes=_emittableGroupTypes;
@property (strong, nonatomic) id<FCHeadlineClusterOrdering> headlineClusterOrderer; // @synthesize headlineClusterOrderer=_headlineClusterOrderer;
@property (strong, nonatomic) id<FCHeadlineClustering> headlineClusterer; // @synthesize headlineClusterer=_headlineClusterer;

- (void).cxx_destruct;
- (id)_joinedFeedTransformation;
- (id)_nonEditorialFeedTransformationWithFeedContext:(id)arg1 showStoriesOnlyFromFavorites:(BOOL)arg2;
- (void)_performOperation;
- (id)_sortClusteredHeadlinesForDisplay:(id)arg1 withAdditionalData:(id)arg2 scoresByArticleID:(id)arg3 topicsByID:(id)arg4 translationProvider:(id)arg5;
- (id)interleaveHeadlines:(id)arg1 withPublisherDiversificationPenalty:(double)arg2;
- (void)performOperation;

@end


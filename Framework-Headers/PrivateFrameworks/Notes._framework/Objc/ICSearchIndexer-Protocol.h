//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICSearchAsyncQueryable-Protocol.h>
#import <Notes/ICSearchIndexerContextDelegate-Protocol.h>
#import <Notes/ICSearchQueryable-Protocol.h>
#import <Notes/NSObject-Protocol.h>

@class ICSearchIndexerContext;

@protocol ICSearchIndexer <ICSearchQueryable, ICSearchAsyncQueryable, ICSearchIndexerContextDelegate, NSObject>
- (void)deleteIndex;
- (ICSearchIndexerContext *)indexerContext;
- (void)reprocessAllObjects;
- (void)resumeIndexing;
- (void)startProcessingPendingChanges;
- (void)synchronouslyProcessAllObjects;
- (void)wrapUpIndexingIfNecessary;
@end

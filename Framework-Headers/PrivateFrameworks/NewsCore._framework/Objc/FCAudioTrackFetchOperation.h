//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCArticleAudioTrack;
@protocol FCContentContext;

@interface FCAudioTrackFetchOperation : FCOperation
{
    BOOL _cachedOnly;
    CDUnknownBlockType _interestTokenHandler;
    CDUnknownBlockType _archiveHandler;
    CDUnknownBlockType _fetchCompletionHandler;
    id<FCContentContext> _context;
    FCArticleAudioTrack *_audioTrack;
}

@property (copy, nonatomic) CDUnknownBlockType archiveHandler; // @synthesize archiveHandler=_archiveHandler;
@property (readonly, nonatomic) FCArticleAudioTrack *audioTrack; // @synthesize audioTrack=_audioTrack;
@property (nonatomic) BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property (readonly, nonatomic) id<FCContentContext> context; // @synthesize context=_context;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType interestTokenHandler; // @synthesize interestTokenHandler=_interestTokenHandler;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 audioTrack:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;

@end


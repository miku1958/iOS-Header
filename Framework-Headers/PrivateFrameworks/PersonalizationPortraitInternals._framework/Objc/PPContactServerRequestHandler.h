//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPContactServerProtocol-Protocol.h>

@class NSString, PPLocalContactStore, PPXPCServerPipelinedBatchQueryManager;
@protocol PPContactClientProtocol;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol>
{
    id<PPContactClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    _Atomic BOOL _isTerminated;
    PPLocalContactStore *_store;
    NSString *_clientProcessName;
}

@property (copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;

- (void).cxx_destruct;
- (void)contactHandlesForSource:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactHandlesForTopics:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithStore:(id)arg1;
- (void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIsTerminated;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPEventServerProtocol-Protocol.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPEventClientProtocol;

@interface PPEventServerRequestHandler : NSObject <PPEventServerProtocol>
{
    id<PPEventClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
}

@property (copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;

- (void).cxx_destruct;
- (void)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;
- (void)eventNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (id)init;
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;
- (void)sendRTCLogsWithWithCompletion:(CDUnknownBlockType)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end


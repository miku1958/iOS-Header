//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, NSDictionary;

@protocol PMLEvaluationTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (NSDictionary *)trackEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg2;
@end


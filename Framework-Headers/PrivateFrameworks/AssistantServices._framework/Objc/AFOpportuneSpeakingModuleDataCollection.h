//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AFOpportuneSpeakingModuleDataCollection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_speakableMap;
}

+ (id)sharedCollector;
- (void).cxx_destruct;
- (void)_deleteSpeakablesOlderThan:(id)arg1;
- (id)init;
- (void)logFeedbackOfType:(long long)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3;
- (void)logInteractionEvents:(id)arg1 forSpeakableId:(id)arg2;
- (void)logRecommendedAction:(id)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3;
- (void)logSpeakable:(id)arg1 forContact:(id)arg2 withModelId:(id)arg3 withFeatures:(id)arg4 withScore:(float)arg5;

@end

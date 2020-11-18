//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUIInternal/SPUISearchModel.h>

@class NSObject, SPZKWSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelZKW : SPUISearchModel
{
    NSObject<OS_dispatch_queue> *_queryProcessor;
    BOOL _shouldCacheResults;
    BOOL _newQuery;
    SPZKWSession *_session;
}

@property (strong, nonatomic) SPZKWSession *session; // @synthesize session=_session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)updateAtUIPriorityWithQueryContext:(id)arg1;
- (void)updateWithQueryContext:(id)arg1;
- (void)updateWithQueryContext:(id)arg1 uiPriority:(BOOL)arg2;

@end

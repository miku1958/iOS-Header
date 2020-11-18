//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPServerObjectDatabaseObserver-Protocol.h>

@class MPCPlaybackEngine, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface _MPCFairPlayPerformanceController : NSObject <MPCPlaybackEngineEventObserving, MPServerObjectDatabaseObserver>
{
    NSMutableSet *_SAPSignPrewarmingAccounts;
    NSMutableSet *_SAPSignPrewarmedAccounts;
    NSObject<OS_dispatch_queue> *_miniQueue;
    NSMutableSet *_miniSINFEndpointLoadingAccounts;
    NSMutableDictionary *_miniSINFAccounts;
    BOOL _scheduledMiniSINFs;
    MPCPlaybackEngine *_playbackEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_fetchMiniSINFsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_optimisticallyFetchLeaseForAccount:(id)arg1;
- (void)_prewarmMiniSINFEndpointForAccount:(id)arg1;
- (void)_prewarmSAPSigningForAccount:(id)arg1;
- (void)database:(id)arg1 didFinishImportRequest:(id)arg2;
- (void)dealloc;
- (void)engine:(id)arg1 didChangeAccounts:(id)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)scheduleMiniSINFFetch;

@end

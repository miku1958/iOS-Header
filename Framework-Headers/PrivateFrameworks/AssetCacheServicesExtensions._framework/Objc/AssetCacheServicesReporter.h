//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AssetCacheServicesReporterDelegate, OS_dispatch_queue, OS_os_log;

@interface AssetCacheServicesReporter : NSObject
{
    id<AssetCacheServicesReporterDelegate> _weakDelegate;
    NSObject<OS_dispatch_queue> *_weakDelegateQueue;
    NSObject<OS_os_log> *_logHandle;
    NSMutableDictionary *_results;
}

@property (strong) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property (strong) NSMutableDictionary *results; // @synthesize results=_results;
@property (weak) id<AssetCacheServicesReporterDelegate> weakDelegate; // @synthesize weakDelegate=_weakDelegate;
@property (weak) NSObject<OS_dispatch_queue> *weakDelegateQueue; // @synthesize weakDelegateQueue=_weakDelegateQueue;

- (void).cxx_destruct;
- (void)didFinishWithResults:(id)arg1;
- (void)didGatherResults:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)doRanges:(id)arg1 containAddress:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)keyPath:(id)arg1 byAppendingKey:(id)arg2;
- (id)locateServersWithOptions:(id)arg1;
- (id)prettyRanges:(id)arg1;
- (void)reportCachedServersWithKeyPath:(id)arg1;
- (void)reportFreshServersWithKeyPath:(id)arg1;
- (void)reportMightHaveWithKeyPath:(id)arg1;
- (void)reportPublicIPAddress;
- (void)reportPublicIPAddressRangesWithKeyPath:(id)arg1;
- (void)reportServersWithKeyPath:(id)arg1 generateOptions:(CDUnknownBlockType)arg2;
- (void)start;
- (void)willStartGatheringResultsForKeyPath:(id)arg1;

@end


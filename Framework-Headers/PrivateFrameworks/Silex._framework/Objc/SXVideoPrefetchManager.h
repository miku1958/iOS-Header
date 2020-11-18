//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoTransitionObserver-Protocol.h>

@class NSMapTable, NSString;
@protocol SXVideoPrefetcherFactory, SXVideoQueueObserving, SXVideoQueueProviding;

@interface SXVideoPrefetchManager : NSObject <SXVideoTransitionObserver>
{
    id<SXVideoQueueProviding> _queueProvider;
    id<SXVideoQueueObserving> _queueObserver;
    id<SXVideoPrefetcherFactory> _prefetcherFactory;
    NSMapTable *_prefetchers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXVideoPrefetcherFactory> prefetcherFactory; // @synthesize prefetcherFactory=_prefetcherFactory;
@property (readonly, nonatomic) NSMapTable *prefetchers; // @synthesize prefetchers=_prefetchers;
@property (readonly, nonatomic) id<SXVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property (readonly, nonatomic) id<SXVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (id)initWithQueueProvider:(id)arg1 queueObserver:(id)arg2 prefetcherFactory:(id)arg3;
- (void)updatePrefetchersWithCurrentVideo:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end


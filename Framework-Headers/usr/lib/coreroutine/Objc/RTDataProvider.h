//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

#import <coreroutine/RTDataProviderProtocol-Protocol.h>

@class NSError, NSMutableArray, NSString, RTInvocationDispatcher;

__attribute__((visibility("hidden")))
@interface RTDataProvider : RTNotifier <RTDataProviderProtocol>
{
    BOOL _populating;
    RTInvocationDispatcher *_dispatcher;
    NSMutableArray *_cachedEvents;
    unsigned long long _state;
    NSError *_invalidationError;
}

@property (strong, nonatomic) NSMutableArray *cachedEvents; // @synthesize cachedEvents=_cachedEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSError *invalidationError; // @synthesize invalidationError=_invalidationError;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL populating; // @synthesize populating=_populating;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

+ (id)providerName;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)__fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterPredicate:(id)arg3 sortDescriptors:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_didReceiveMemoryWarning:(long long)arg1;
- (void)_fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterPredicate:(id)arg3 sortDescriptors:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_purgeCache;
- (void)_removeAllEvents;
- (void)addObserverInternal:(id)arg1 notificationName:(id)arg2;
- (void)fetchAllEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchDataProviderStatus:(CDUnknownBlockType)arg1;
- (void)fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterPredicate:(id)arg3 sortDescriptors:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)fetchEventsWithFilterPredicate:(id)arg1 sortDescriptors:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)onMemoryWarningNotification:(id)arg1;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (void)purgeCache;
- (void)refresh;
- (void)removeObserverInternal:(id)arg1 notificationName:(id)arg2;
- (void)shutdown;
- (id)supportedEventClasses;
- (BOOL)supportsEventClass:(Class)arg1;

@end

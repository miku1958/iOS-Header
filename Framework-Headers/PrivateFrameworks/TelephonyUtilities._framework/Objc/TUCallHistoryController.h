//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDelegate-Protocol.h>

@class CHManager, NSArray, NSMutableSet, NSString, TUCallProviderManager, TUDispatcher;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>
{
    unsigned long long _coalescingStrategy;
    unsigned long long _options;
    NSArray *_recentCalls;
    unsigned long long _unreadCallCount;
    CHManager *_callHistoryManager;
    TUCallProviderManager *_callProviderManager;
    TUDispatcher *_dispatcher;
    TUDispatcher *_simpleIvarDispatcher;
    NSArray *_thirdPartyCallProviders;
    NSMutableSet *_metadataPreCachedOptions;
}

@property (strong, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property (strong, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property (nonatomic) unsigned long long coalescingStrategy; // @synthesize coalescingStrategy=_coalescingStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) TUDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *metadataPreCachedOptions; // @synthesize metadataPreCachedOptions=_metadataPreCachedOptions;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) NSArray *recentCalls; // @synthesize recentCalls=_recentCalls;
@property (strong, nonatomic) TUDispatcher *simpleIvarDispatcher; // @synthesize simpleIvarDispatcher=_simpleIvarDispatcher;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *thirdPartyCallProviders; // @synthesize thirdPartyCallProviders=_thirdPartyCallProviders;
@property (nonatomic) unsigned long long unreadCallCount; // @synthesize unreadCallCount=_unreadCallCount;

+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)sharedController;
+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)arg1;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)boostQualityOfService;
- (void)callHistoryDatabaseChanged:(id)arg1;
- (CDUnknownBlockType)callHistoryManagerInitializationDispatchBlock;
- (CDUnknownBlockType)callHistoryManagerRecentCallsDispatchBlock;
- (void)dealloc;
- (void)deleteAllRecentCalls;
- (void)deleteRecentCall:(id)arg1;
- (void)deleteRecentCalls:(id)arg1;
- (void)dispatcherDidFinishBoost:(id)arg1;
- (id)init;
- (id)initWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)loadDispatchQueue;
- (void)markRecentAudioCallsAsRead;
- (void)markRecentCallsAsRead;
- (void)markRecentCallsAsReadWithPredicate:(id)arg1;
- (void)markRecentVideoCallsAsRead;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)reloadWithOptions:(unsigned long long)arg1;

@end

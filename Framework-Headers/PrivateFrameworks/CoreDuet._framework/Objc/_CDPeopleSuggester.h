//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDCachedPeopleSuggestion, _CDInteractionStoreNotificationReceiver, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;
@protocol OS_dispatch_queue, _CDInteractionAdvising;

@interface _CDPeopleSuggester : NSObject
{
    id<_CDInteractionAdvising> _advisor;
    NSObject<OS_dispatch_queue> *_queue;
    _CDCachedPeopleSuggestion *_cache;
    _CDInteractionStoreNotificationReceiver *_receiver;
    BOOL _enableCaching;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    double _cacheTimeoutSeconds;
}

@property double cacheTimeoutSeconds; // @synthesize cacheTimeoutSeconds=_cacheTimeoutSeconds;
@property (strong) _CDPeopleSuggesterContext *context; // @synthesize context=_context;
@property BOOL enableCaching; // @synthesize enableCaching=_enableCaching;
@property (strong) _CDPeopleSuggesterSettings *settings; // @synthesize settings=_settings;

+ (id)createAdvisorSettingsFromContext:(id)arg1 settings:(id)arg2;
+ (id)loggingTagForAutocompleteFeedback;
+ (id)peopleSuggester;
+ (id)peopleSuggesterUsingDaemon;
+ (id)peopleSuggesterWithDirectDBAccess;
+ (id)restrictedPrefixForPrefix:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAdvisor:(id)arg1;
- (void)invalidateCache;
- (void)suggestPeopleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)suggestPeopleWithError:(id *)arg1;

@end


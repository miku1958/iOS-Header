//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICLexiconManaging-Protocol.h>
#import <InputContext/_ICPredictionManaging-Protocol.h>

@class NSMutableArray, NSString, _ICPredictionManager;
@protocol _ICLexiconManaging, _ICLexiconSourcing;

@interface _ICInputContextManager : NSObject <_ICPredictionManaging, _ICLexiconManaging>
{
    id<_ICLexiconSourcing> _lexiconSource;
    NSMutableArray *_allPredictionSources;
    struct _LXLexicon *_durableNamedEntityLexicon;
    struct _LXLexicon *_recentNamedEntityLexicon;
    id<_ICLexiconManaging> _lexiconManager;
    _ICPredictionManager *_predictionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (void)commonLazyInitialization;
- (void)doInitialization;
- (id)getLexiconManager;
- (id)getPredictionManager;
- (id)initForIntegrationTesting;
- (id)initWithPredictionSource:(id)arg1;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (id)loadLexicons:(CDUnknownBlockType)arg1;
- (void)predictedItemSelected:(id)arg1;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;
- (void)unloadLexicons;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICFeedbackAccepting-Protocol.h>
#import <InputContext/_ICPredictionManaging-Protocol.h>

@class NSArray, NSString, _ICResultCache;

@interface _ICPredictionManager : NSObject <_ICPredictionManaging, _ICFeedbackAccepting>
{
    NSArray *_predictionSources;
    _ICResultCache *_cache;
}

@property (strong) _ICResultCache *cache; // @synthesize cache=_cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_quickTypePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(unsigned long long)arg3 error:(id *)arg4;
- (void)hibernate;
- (id)initWithPredictionSources:(id)arg1;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (void)predictedItemSelected:(id)arg1;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)reset;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id *)arg4;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;
- (void)warmUp;
- (id)workLocation;

@end

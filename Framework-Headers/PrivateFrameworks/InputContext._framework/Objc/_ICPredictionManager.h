//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICManager-Protocol.h>

@class _ICResultCache;
@protocol _ICPredictionSource;

@interface _ICPredictionManager : NSObject <_ICManager>
{
    id<_ICPredictionSource> _myPredictionSource;
    _ICResultCache *_cache;
}

@property (strong) _ICResultCache *cache; // @synthesize cache=_cache;

+ (id)predictionManager;
- (void).cxx_destruct;
- (id)_connectionsPredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id *)arg4;
- (id)_eventPredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id *)arg4;
- (id)_peoplePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id *)arg4;
- (id)getContactsWithAddressBookLimit:(int)arg1 foundLimit:(int)arg2 error:(id *)arg3;
- (id)getPredictionSource;
- (id)init;
- (id)initWithPredictionSource:(id)arg1;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (void)predictedItemSelected:(id)arg1;
- (void)reset;
- (id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id *)arg4;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface CLSSocialService : NSObject
{
    NSURL *_proxyURL;
    NSMutableDictionary *_proxy;
    unsigned long long _intent;
}

@property (readonly) unsigned long long intent; // @synthesize intent=_intent;

+ (id)socialService;
- (void).cxx_destruct;
- (id)_allPersonRecords;
- (id)_allPersons;
- (float)_confidenceInPersonRecord:(id)arg1 forName:(id)arg2 components:(id)arg3;
- (void)_fetchPersonRecordsForName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_firstNameForPersonRecord:(id)arg1;
- (id)_fullNameForPersonRecord:(id)arg1;
- (float)_fuzzyMatchingScoreBetweenNameComponents:(id)arg1 andNameComponents:(id)arg2;
- (id)_lastNameForPersonRecord:(id)arg1;
- (id)_maidenNameForPersonRecord:(id)arg1;
- (id)_mePersons;
- (id)_meRecords;
- (id)_nicknameForPersonRecord:(id)arg1;
- (id)eventsOperationForClueCollection:(id)arg1;
- (id)eventsOperationForDates:(id)arg1 inInvestigation:(id)arg2;
- (void)flushProxy;
- (id)init;
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;
- (void)invalidateMemoryCaches;
- (id)mePerson;
- (id)personsOperationForLocations:(id)arg1 inInvestigation:(id)arg2;
- (id)personsOperationForName:(id)arg1 inInvestigation:(id)arg2 inPhotoLibrary:(id)arg3;
- (id)proxiedValueForKey:(id)arg1;
- (void)setProxiedValue:(id)arg1 forKey:(id)arg2;

@end

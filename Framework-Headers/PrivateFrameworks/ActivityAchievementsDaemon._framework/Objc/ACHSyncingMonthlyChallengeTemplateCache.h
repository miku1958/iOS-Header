//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseTransactionContext, HDKeyValueDomain, HDProfile, NSCalendar;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject
{
    struct os_unfair_lock_s _lock;
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    NSCalendar *_gregorianCalendar;
    HDKeyValueDomain *_keyValueDomain;
}

@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // @synthesize databaseContext=_databaseContext;
@property (copy, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property (strong, nonatomic) HDKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property (nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;

- (void).cxx_destruct;
- (id)allCachedTemplatesWithError:(id *)arg1;
- (BOOL)cacheTemplate:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1;
- (id)templateForDateComponents:(id)arg1 error:(id *)arg2;

@end


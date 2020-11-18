//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSDate;

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager
{
    NSDate *_lastDateUpdate;
}

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_supportsHistoricProviders;
- (void).cxx_destruct;
- (void)_addedProvider:(id)arg1;
- (void)_closeDataStoresAndObserveChanges;
- (void)_handleSignificantTimeChange;
- (BOOL)_isHistoricProvider:(id)arg1;
- (void)_openDataStoresAndObserveChanges;
- (void)_prepareForUpdate;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;
- (void)_scheduleUpdatesForSessionProvider:(id)arg1;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;

@end


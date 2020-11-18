//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudService.h>

@interface PLCloudBudgetService : PLCloudService
{
    unsigned long long _lastCacheDeleteRequestBytes;
    long long _lastCacheDeleteRequestTime;
}

- (void)activate;
- (unsigned long long)availableBudget;
- (void)cacheDelete:(id)arg1;
- (id)messageWithCurrentState;
- (void)publishUpdatedBudget;

@end


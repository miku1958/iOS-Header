//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKValueDataProvider.h>

@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider
{
}

- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sumFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)currentValue;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;

@end

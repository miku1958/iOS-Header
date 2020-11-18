//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUIIDSRequest : NSObject
{
}

+ (id)IDSResponseQueue;
+ (id)IDSServiceForService:(long long)arg1;
+ (id)afterDelayRetryRefreshingStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 scheduler:(id)arg4;
+ (id)errorRefreshingHandles:(id)arg1 forService:(id)arg2;
+ (BOOL)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(id)arg2;
+ (BOOL)isStatusOfEveryDestinationUnknown:(id)arg1;
+ (id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3;
+ (id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 delay:(double)arg4 scheduler:(id)arg5;
+ (id)resultsForIDSControllerResult:(id)arg1 handlesByDestination:(id)arg2;
+ (BOOL)shouldRetryRefreshingIDSStatusOfDesinationsGivenResult:(id)arg1;
+ (id)validHandlesFromHandles:(id)arg1;
+ (id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4;

@end

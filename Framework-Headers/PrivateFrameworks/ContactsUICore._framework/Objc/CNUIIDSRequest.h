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
+ (BOOL)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(id)arg2;
+ (id)resultsForIDSControllerResult:(id)arg1 handlesByDestination:(id)arg2;
+ (id)validHandlesFromHandles:(id)arg1;
+ (id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4;

@end


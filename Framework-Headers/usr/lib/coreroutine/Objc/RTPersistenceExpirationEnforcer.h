//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTPersistenceExpirationEnforcer : NSObject
{
}

- (id)entitiesWithDeviceAndExpirationProperty:(id)arg1;
- (BOOL)removeRecordsOwnedByOtherDevicesExpiredBeforeDate:(id)arg1 allowPropagation:(BOOL)arg2 withContext:(id)arg3 error:(id *)arg4;

@end

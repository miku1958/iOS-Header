//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CNEntitlementVerifier : NSObject
{
}

+ (BOOL)auditToken:(CDStruct_6ad76789)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;
+ (BOOL)secTask:(struct __SecTask *)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;

@end


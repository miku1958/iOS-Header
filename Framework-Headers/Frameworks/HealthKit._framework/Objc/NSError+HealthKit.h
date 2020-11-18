//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (HealthKit)
+ (BOOL)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;
+ (BOOL)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (BOOL)hk_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)hk_error:(long long)arg1 description:(id)arg2;
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_error:(long long)arg1 format:(id)arg2;
+ (id)hk_featureUnavailableForProfileError;
+ (id)hk_invalidProfileError;
+ (id)hk_protectedDataInaccessibilityError;
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;
- (BOOL)hk_isAuthorizationDeniedError;
- (BOOL)hk_isAuthorizationNotDeterminedError;
- (BOOL)hk_isCocoaNoSuchFileError;
- (BOOL)hk_isDatabaseAccessibilityError;
- (BOOL)hk_isDatabaseTransactionError;
- (BOOL)hk_isHealthKitError;
- (BOOL)hk_isHealthKitErrorWithCode:(long long)arg1;
- (BOOL)hk_isInternalFailureError;
- (BOOL)hk_isInvalidArgumentError;
- (BOOL)hk_isRequiredAuthorizationError;
- (BOOL)hk_isServiceDeviceNotFoundError;
- (BOOL)hk_isStreamFailureError;
- (BOOL)hk_isTimeoutError;
- (BOOL)hk_isUserCanceledError;
- (BOOL)hk_isXPCConnectionError;
- (id)hk_sanitizedError;
- (id)hk_underlyingErrorWithDomain:(id)arg1;
@end


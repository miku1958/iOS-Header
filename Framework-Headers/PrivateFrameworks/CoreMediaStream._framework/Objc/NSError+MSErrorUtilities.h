//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (MSErrorUtilities)
+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;
- (int)MMCSErrorType;
- (BOOL)MMCSIsAuthorizationError;
- (BOOL)MMCSIsCancelError;
- (BOOL)MMCSIsFatalError;
- (BOOL)MMCSIsNetworkConditionsError;
- (id)MMCSRetryAfterDate;
- (BOOL)MSASStateMachineIsCanceledError;
- (BOOL)MSCanBeIgnored;
- (BOOL)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;
- (id)MSFindPrimaryError;
- (BOOL)MSIsAuthError;
- (BOOL)MSIsBadTokenError;
- (BOOL)MSIsCounted;
- (BOOL)MSIsFatal;
- (BOOL)MSIsQuotaError;
- (BOOL)MSIsRegistrationError;
- (BOOL)MSIsTemporaryNetworkError;
- (id)MSMMCSRetryAfterDate;
- (id)MSMakePrimaryError;
- (BOOL)MSNeedsBackoff;
- (id)MSVerboseDescription;
- (void)_MMCSApplyBlock:(CDUnknownBlockType)arg1;
- (void)_MSApplyBlock:(CDUnknownBlockType)arg1;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (CPLAdditions)
- (id)_cplSafeUserInfoForXPCDidChange:(BOOL *)arg1;
- (id)cplSafeErrorForXPC;
- (id)cplShortDomainDescription;
- (id)cplUnderlyingPOSIXError;
- (BOOL)isCPLError;
- (BOOL)isCPLErrorWithCode:(long long)arg1;
- (BOOL)isCPLOperationCancelledError;
@end

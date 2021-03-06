//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (CoreCDP)
+ (id)cdp_errorWithCode:(long long)arg1;
+ (id)cdp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)cdp_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (BOOL)cdp_isCDPErrorWithCode:(long long)arg1;
- (BOOL)cdp_isLoginHardLimit;
- (BOOL)cdp_isLoginSoftLimit;
- (BOOL)shouldDisplayToUser;
@end


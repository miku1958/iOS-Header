//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AKAppleIDAuthenticationContext, AKAppleIDAuthenticationController, NSError, NSMutableDictionary;

@protocol AKAppleIDAuthenticationDelegate <NSObject>

@optional
- (BOOL)authenticationController:(AKAppleIDAuthenticationController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4;
- (void)authenticationController:(AKAppleIDAuthenticationController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4 completion:(void (^)(BOOL))arg5;
@end


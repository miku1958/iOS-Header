//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class AAUISignInOperationManager, ACAccount, NSError;

@protocol AAUISignInOperationDelegate <NSObject>
- (void)signInOperationManager:(AAUISignInOperationManager *)arg1 didSaveAccount:(ACAccount *)arg2 error:(NSError *)arg3;
@end


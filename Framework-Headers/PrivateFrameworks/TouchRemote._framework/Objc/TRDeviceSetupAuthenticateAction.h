//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSArray, NSString;

@interface TRDeviceSetupAuthenticateAction : TRDeviceSetupAction
{
}

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSString *accountPassword;
@property (readonly, nonatomic) unsigned long long accountType;
@property (readonly, copy, nonatomic) NSArray *accountTypesWithSharedCredentials;
@property (readonly, nonatomic) unsigned long long attemptCount;
@property (readonly, copy, nonatomic) NSString *failureMessage;
@property (readonly, copy, nonatomic) NSString *requestMessage;

+ (id)actionForCancelledRequestWithOriginalAction:(id)arg1;
+ (id)actionForFailedAttemptWithOriginalAction:(id)arg1 requestMessage:(id)arg2 failureMessage:(id)arg3;
+ (id)actionForFinishedRequestWithOriginalAction:(id)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4;
+ (id)actionForInitialAttemptWithAccountType:(unsigned long long)arg1 requestMessage:(id)arg2;
- (id)_initWithAccountType:(unsigned long long)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4 attemptCount:(unsigned long long)arg5 requestMessage:(id)arg6 failureMessage:(id)arg7;
- (id)init;

@end


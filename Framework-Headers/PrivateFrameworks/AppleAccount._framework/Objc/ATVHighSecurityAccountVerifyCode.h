//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/ATVHighSecurityAccountSendCode.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode
{
    NSString *_hsaCode;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 device:(id)arg2 hsaCode:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAUIAcceptFamilyInviteRequest : AAFamilyRequest
{
    NSString *_inviteCode;
}

@property (copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;

- (void).cxx_destruct;
- (BOOL)isUserInitiated;
- (id)urlRequest;
- (id)urlString;

@end


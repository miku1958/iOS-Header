//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSString;

@interface FAInviteFamilyMemberRequest : FAFamilyRequest
{
    NSString *_inviteeEmail;
    NSString *_inviteeCompositeName;
    NSString *_inviteeShortName;
}

@property (copy, nonatomic) NSString *inviteeCompositeName; // @synthesize inviteeCompositeName=_inviteeCompositeName;
@property (copy, nonatomic) NSString *inviteeEmail; // @synthesize inviteeEmail=_inviteeEmail;
@property (copy, nonatomic) NSString *inviteeShortName; // @synthesize inviteeShortName=_inviteeShortName;

- (void).cxx_destruct;
- (BOOL)isUserInitiated;
- (id)url;
- (id)urlRequest;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class AAFamilyMember, NSArray, NSString;

@interface AAFamilyDetailsResponse : AAResponse
{
    NSArray *_members;
    BOOL _canAddMembers;
    BOOL _canAddChildMembers;
    AAFamilyMember *_organizer;
    AAFamilyMember *_me;
    NSArray *_invites;
    NSArray *_pendingMembers;
    NSString *_childAccountPrompt;
    NSString *_childAccountButtonTitle;
}

@property (readonly, nonatomic) BOOL canAddChildMembers; // @synthesize canAddChildMembers=_canAddChildMembers;
@property (readonly, nonatomic) BOOL canAddMembers; // @synthesize canAddMembers=_canAddMembers;
@property (readonly, nonatomic) NSString *childAccountButtonTitle; // @synthesize childAccountButtonTitle=_childAccountButtonTitle;
@property (readonly, nonatomic) NSString *childAccountPrompt; // @synthesize childAccountPrompt=_childAccountPrompt;
@property (readonly, nonatomic) NSArray *firstNames;
@property (readonly, nonatomic) NSArray *invites; // @synthesize invites=_invites;
@property (readonly, nonatomic) AAFamilyMember *me; // @synthesize me=_me;
@property (readonly, nonatomic) long long memberCount;
@property (readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property (readonly, nonatomic) AAFamilyMember *organizer; // @synthesize organizer=_organizer;
@property (readonly, nonatomic) long long pendingInviteCount;
@property (readonly, nonatomic) long long pendingMemberCount;
@property (readonly, nonatomic) NSArray *pendingMembers; // @synthesize pendingMembers=_pendingMembers;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNoteShareRelationshipRestrictions, NSArray;

@interface EDAMNoteShareRelationships : FATObject
{
    NSArray *_invitations;
    NSArray *_memberships;
    EDAMNoteShareRelationshipRestrictions *_invitationRestrictions;
}

@property (strong, nonatomic) EDAMNoteShareRelationshipRestrictions *invitationRestrictions; // @synthesize invitationRestrictions=_invitationRestrictions;
@property (strong, nonatomic) NSArray *invitations; // @synthesize invitations=_invitations;
@property (strong, nonatomic) NSArray *memberships; // @synthesize memberships=_memberships;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end


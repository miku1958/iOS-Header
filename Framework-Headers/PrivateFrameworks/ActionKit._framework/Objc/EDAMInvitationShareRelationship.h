//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMUserIdentity, NSNumber, NSString;

@interface EDAMInvitationShareRelationship : FATObject
{
    NSString *_displayName;
    EDAMUserIdentity *_recipientUserIdentity;
    NSNumber *_privilege;
    NSNumber *_sharerUserId;
}

@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property (strong, nonatomic) EDAMUserIdentity *recipientUserIdentity; // @synthesize recipientUserIdentity=_recipientUserIdentity;
@property (strong, nonatomic) NSNumber *sharerUserId; // @synthesize sharerUserId=_sharerUserId;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMCourse-Protocol.h>

@class CRKASMCertificateVendor, CRKASMIdentityVendor, DMFControlGroupIdentifier, NSArray, NSDate, NSSet, NSString;
@protocol CRKASMLocation, CRKIdentity;

@interface CRKASMConcreteCourse : NSObject <CRKASMCourse>
{
    BOOL _editable;
    unsigned long long _color;
    DMFControlGroupIdentifier *_identifier;
    id<CRKASMLocation> _location;
    unsigned long long _mascot;
    NSString *_name;
    NSArray *_trustedUsers;
    NSArray *_users;
    NSDate *_creationDate;
    NSString *_backingClassObjectID;
    CRKASMIdentityVendor *_identityVendor;
    CRKASMCertificateVendor *_certificateVendor;
    NSSet *_trustedUserIdentifiers;
}

@property (readonly, copy, nonatomic) NSSet *allTrustedUserCertificates;
@property (readonly, copy, nonatomic) NSString *backingClassObjectID; // @synthesize backingClassObjectID=_backingClassObjectID;
@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor; // @synthesize certificateVendor=_certificateVendor;
@property (readonly, nonatomic) unsigned long long color; // @synthesize color=_color;
@property (readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property (readonly, copy, nonatomic) DMFControlGroupIdentifier *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) id<CRKIdentity> identity;
@property (readonly, nonatomic) CRKASMIdentityVendor *identityVendor; // @synthesize identityVendor=_identityVendor;
@property (readonly, nonatomic) id<CRKASMLocation> location; // @synthesize location=_location;
@property (readonly, nonatomic) unsigned long long mascot; // @synthesize mascot=_mascot;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSSet *trustedUserIdentifiers; // @synthesize trustedUserIdentifiers=_trustedUserIdentifiers;
@property (readonly, copy, nonatomic) NSArray *trustedUsers; // @synthesize trustedUsers=_trustedUsers;
@property (readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;

+ (id)courseNameforClass:(id)arg1;
+ (id)trustedUserIdentifierForTrustedUsers:(id)arg1;
+ (id)trustedUsersFromPersons:(id)arg1 certificateVendor:(id)arg2;
+ (id)usersFromPersons:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBackingClass:(id)arg1 location:(id)arg2 persons:(id)arg3 trustedPersons:(id)arg4 identityVendor:(id)arg5 certificateVendor:(id)arg6 manageableLocationIDs:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end

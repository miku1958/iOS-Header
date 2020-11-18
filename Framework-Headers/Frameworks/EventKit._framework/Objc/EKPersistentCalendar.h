//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSSet, NSString, NSURL;

@interface EKPersistentCalendar : EKPersistentObject
{
}

@property (strong, nonatomic) NSString *UUID; // @dynamic UUID;
@property (copy, nonatomic) NSString *bulkRequests; // @dynamic bulkRequests;
@property (nonatomic, getter=isColorDisplayOnly) BOOL colorDisplayOnly; // @dynamic colorDisplayOnly;
@property (copy, nonatomic) NSString *colorString; // @dynamic colorString;
@property (nonatomic) int displayOrder; // @dynamic displayOrder;
@property (copy, nonatomic) NSString *externalID; // @dynamic externalID;
@property (copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property (nonatomic) int flags; // @dynamic flags;
@property (nonatomic) unsigned long long invitationStatus; // @dynamic invitationStatus;
@property (copy, nonatomic) NSURL *ownerIdentityAddress; // @dynamic ownerIdentityAddress;
@property (copy, nonatomic) NSString *ownerIdentityDisplayName; // @dynamic ownerIdentityDisplayName;
@property (copy, nonatomic) NSString *ownerIdentityEmail; // @dynamic ownerIdentityEmail;
@property (copy, nonatomic) NSString *ownerIdentityFirstName; // @dynamic ownerIdentityFirstName;
@property (copy, nonatomic) NSString *ownerIdentityLastName; // @dynamic ownerIdentityLastName;
@property (copy, nonatomic) NSString *ownerIdentityPhoneNumber; // @dynamic ownerIdentityPhoneNumber;
@property (nonatomic, getter=isPublished) BOOL published; // @dynamic published;
@property (copy, nonatomic) NSString *publishedURL; // @dynamic publishedURL;
@property (copy, nonatomic) NSString *pushKey; // @dynamic pushKey;
@property (copy, nonatomic) NSURL *selfIdentityAddress; // @dynamic selfIdentityAddress;
@property (copy, nonatomic) NSString *selfIdentityDisplayName; // @dynamic selfIdentityDisplayName;
@property (copy, nonatomic) NSString *selfIdentityEmail; // @dynamic selfIdentityEmail;
@property (copy, nonatomic) NSString *selfIdentityFirstName; // @dynamic selfIdentityFirstName;
@property (copy, nonatomic) NSString *selfIdentityLastName; // @dynamic selfIdentityLastName;
@property (copy, nonatomic) NSString *selfIdentityPhoneNumber; // @dynamic selfIdentityPhoneNumber;
@property (copy, nonatomic) NSURL *sharedOwnerAddress; // @dynamic sharedOwnerAddress;
@property (copy, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property (copy, nonatomic) NSSet *sharees; // @dynamic sharees;
@property (nonatomic) unsigned long long sharingInvitationResponse; // @dynamic sharingInvitationResponse;
@property (nonatomic) unsigned long long sharingStatus; // @dynamic sharingStatus;
@property (strong, nonatomic) EKPersistentSource *source; // @dynamic source;
@property (copy, nonatomic) NSString *subcalAccountID; // @dynamic subcalAccountID;
@property (copy, nonatomic) NSString *symbolicColorName; // @dynamic symbolicColorName;
@property (copy, nonatomic) NSString *title; // @dynamic title;

+ (id)calendarWithRandomUUID;
+ (id)defaultPropertiesToLoad;
+ (id)relations;
- (id)alarms;
- (int)allowedEntities;
- (id)description;
- (id)digest;
- (int)entityType;
- (id)externalIDTag;
- (id)externalRepresentation;
- (id)notes;
- (void)setAlarms:(id)arg1;
- (void)setAllowedEntities:(int)arg1;
- (void)setDigest:(id)arg1;
- (void)setExternalIDTag:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setIsPublished:(BOOL)arg1;
- (void)setNotes:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (id)syncToken;

@end


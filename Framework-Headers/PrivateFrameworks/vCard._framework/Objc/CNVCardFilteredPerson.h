//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardPerson-Protocol.h>

@class CNVCardFilteredPersonScope, NSArray, NSData, NSDateComponents, NSDictionary, NSString;
@protocol CNVCardPerson;

@interface CNVCardFilteredPerson : NSObject <CNVCardPerson>
{
    id<CNVCardPerson> _person;
    CNVCardFilteredPersonScope *_scope;
}

@property (readonly) NSDictionary *activityAlerts;
@property (readonly) NSDateComponents *alternateBirthdayComponents;
@property (readonly) NSDateComponents *birthdayComponents;
@property (readonly) NSArray *calendarURIs;
@property (readonly) NSString *cardDAVUID;
@property (readonly) NSString *companyName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *department;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *imageCropRects;
@property (readonly) NSData *imageData;
@property (readonly) NSArray *imageReferences;
@property (readonly) NSArray *instantMessagingAddresses;
@property (readonly) BOOL isCompany;
@property (readonly) BOOL isMe;
@property (readonly) NSString *jobTitle;
@property (readonly) NSDictionary *largeImageCropRects;
@property (readonly) NSData *largeImageData;
@property (readonly) NSString *lastName;
@property (readonly) NSString *maidenName;
@property (readonly) NSString *middleName;
@property (readonly) int nameOrder;
@property (readonly) NSArray *namesOfParentGroups;
@property (readonly) NSString *nickname;
@property (readonly) NSString *note;
@property (readonly) NSString *organization;
@property (readonly) NSArray *otherDateComponents;
@property (readonly, nonatomic) id<CNVCardPerson> person; // @synthesize person=_person;
@property (readonly) NSArray *phoneNumbers;
@property (readonly) NSString *phonemeData;
@property (readonly) NSString *phoneticFirstName;
@property (readonly) NSString *phoneticLastName;
@property (readonly) NSString *phoneticMiddleName;
@property (readonly) NSString *phoneticOrganization;
@property (readonly) NSArray *postalAddresses;
@property (readonly) NSString *preferredApplePersonaIdentifier;
@property (readonly) NSString *preferredLikenessSource;
@property (readonly) NSString *pronunciationFirstName;
@property (readonly) NSString *pronunciationLastName;
@property (readonly) NSArray *relatedNames;
@property (readonly, nonatomic) CNVCardFilteredPersonScope *scope; // @synthesize scope=_scope;
@property (readonly) NSArray *socialProfiles;
@property (readonly) NSString *suffix;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (readonly) NSString *uid;
@property (readonly) NSArray *unknownProperties;
@property (readonly) NSArray *urls;

+ (id)filteredPersonWithPerson:(id)arg1 scope:(id)arg2;
- (void).cxx_destruct;
- (id)filterItems:(id)arg1 property:(id)arg2;
- (id)initWithPerson:(id)arg1 scope:(id)arg2;
- (id)largeImageHashOfType:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSPrimitive.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CLSPerson : CLSPrimitive
{
    NSMutableArray *_homeAddresses;
    NSMutableArray *_workAddresses;
    BOOL _isFavorite;
    BOOL _isUserCreated;
    NSString *_PHIdentifier;
    NSString *_CNIdentifier;
    NSString *_fullName;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_nickname;
    unsigned long long _gender;
    NSDate *_birthdayDate;
    NSDate *_anniversaryDate;
    NSString *_companyName;
    NSMutableDictionary *_socialProfiles;
    NSSet *_emailAddresses;
    unsigned long long _relationship;
    NSArray *_sourceURLs;
}

@property (strong, nonatomic) NSString *CNIdentifier; // @synthesize CNIdentifier=_CNIdentifier;
@property (strong, nonatomic) NSString *PHIdentifier; // @synthesize PHIdentifier=_PHIdentifier;
@property (strong, nonatomic) NSDate *anniversaryDate; // @synthesize anniversaryDate=_anniversaryDate;
@property (strong, nonatomic) NSDate *birthdayDate; // @synthesize birthdayDate=_birthdayDate;
@property (strong, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property (strong, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (strong, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property (nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property (readonly, nonatomic) BOOL isMe;
@property (nonatomic) BOOL isUserCreated; // @synthesize isUserCreated=_isUserCreated;
@property (strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (strong, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property (strong, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property (nonatomic) unsigned long long relationship; // @synthesize relationship=_relationship;
@property (strong, nonatomic) NSMutableDictionary *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property (readonly) NSArray *sourceURLs; // @synthesize sourceURLs=_sourceURLs;

+ (id)person;
+ (id)personWithCNIdentifier:(id)arg1;
+ (id)personWithPHIdentifier:(id)arg1;
+ (id)presentationStringForPeople:(id)arg1;
+ (id)presentationStringForPeople:(id)arg1 withScores:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_addressArrayFromAddressType:(unsigned long long)arg1;
- (void)_enumerateAddresses:(id)arg1 as:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_homePlaceSentence:(id)arg1;
- (id)_relationshipAsString;
- (id)_workPlaceSentence:(id)arg1;
- (void)addAddresses:(id)arg1 ofType:(unsigned long long)arg2;
- (unsigned long long)countOfAddressesOfType:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAddressesOfType:(unsigned long long)arg1 asCLLocationsWithBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAddressesOfType:(unsigned long long)arg1 asDictionariesWithBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAddressesOfType:(unsigned long long)arg1 asPlacemarkWithBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAddressesOfType:(unsigned long long)arg1 asStringsWithBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPerson:(id)arg1;
- (BOOL)isLocationCoordinate:(struct CLLocationCoordinate2D)arg1 closeToAddressesOfType:(unsigned long long)arg2;
- (BOOL)isLocationCoordinate:(struct CLLocationCoordinate2D)arg1 farAwayFromAddressesOfType:(unsigned long long)arg2;
- (BOOL)isSamePersonAs:(id)arg1;
- (void)mergeWithPerson:(id)arg1;
- (id)pluralPresentationString;
- (void)prefetchPersonAddressesIfNeededInOperation:(id)arg1;
- (id)presentationString;
- (id)presentationStringForAddressType:(unsigned long long)arg1 inRegion:(id)arg2;
- (void)sanitize;
- (void)setSourceService:(id)arg1 andID:(id)arg2;

@end


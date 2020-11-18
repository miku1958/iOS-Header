//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSString, SGContact;

@interface PEXContact : NSObject
{
    NSString *_cachedFullName;
    NSString *_identifier;
    CNContact *_contact;
    SGContact *_sgContact;
    unsigned long long _source;
    double _score;
}

@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) double score; // @synthesize score=_score;
@property (strong, nonatomic) SGContact *sgContact; // @synthesize sgContact=_sgContact;
@property (nonatomic) unsigned long long source; // @synthesize source=_source;

- (void).cxx_destruct;
- (id)birthday;
- (id)description;
- (id)emailAddresses;
- (id)familyName;
- (id)fullName;
- (id)givenName;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)organizationName;
- (id)phoneNumbers;
- (id)postalAddresses;
- (id)socialProfiles;

@end

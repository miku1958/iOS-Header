//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/NSCopying-Protocol.h>
#import <ActivitySharing/NSSecureCoding-Protocol.h>

@class ASCodableContact, ASRelationship, CNContactStore, NSSet, NSString, NSUUID;

@interface ASContact : NSObject <NSCopying, NSSecureCoding>
{
    CNContactStore *_contactStore;
    NSString *_linkedContactStoreIdentifier;
    NSString *_fullName;
    NSString *_shortName;
    NSSet *_destinations;
    ASRelationship *_relationship;
    ASRelationship *_remoteRelationship;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) ASCodableContact *codableContact;
@property (copy, nonatomic) NSSet *destinations; // @synthesize destinations=_destinations;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (copy, nonatomic) NSString *linkedContactStoreIdentifier; // @synthesize linkedContactStoreIdentifier=_linkedContactStoreIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryDestinationForMessaging;
@property (copy, nonatomic) ASRelationship *relationship; // @synthesize relationship=_relationship;
@property (copy, nonatomic) ASRelationship *remoteRelationship; // @synthesize remoteRelationship=_remoteRelationship;
@property (copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;

+ (id)contactWithCodableContact:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_bestDestinationForContact:(id)arg1;
- (id)_bestDestinationFromKnownDestinations;
- (id)contactStore;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContact:(id)arg1;
- (void)setContactStore:(id)arg1;

@end

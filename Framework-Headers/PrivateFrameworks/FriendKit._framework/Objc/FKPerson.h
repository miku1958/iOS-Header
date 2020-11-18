//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FriendKit/NSCopying-Protocol.h>
#import <FriendKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSSet, NSString;

@interface FKPerson : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_primaryDestination;
    NSString *_initials;
    NSNumber *_phoneNumberCount;
    NSNumber *_emailAddressCount;
    int _abRecordID;
    NSString *_abRecordGUID;
    NSString *_abDatabaseUID;
    NSString *_name;
    NSSet *_allValues;
    BOOL _hasUnreadMessages;
    BOOL _needsSave;
    NSString *_preferredReplyAs;
    NSMutableDictionary *_metadata;
}

@property (readonly, nonatomic) BOOL hasUnreadMessages; // @synthesize hasUnreadMessages=_hasUnreadMessages;
@property (strong, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property (nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property (strong, nonatomic) NSString *preferredReplyAs; // @synthesize preferredReplyAs=_preferredReplyAs;

+ (id)_allEmailValuesForRecord:(void *)arg1;
+ (id)_allEmailValuesInSet:(id)arg1;
+ (id)_allPhoneValuesForRecord:(void *)arg1;
+ (id)_allPhoneValuesInSet:(id)arg1;
+ (int)addValue:(void *)arg1 withLabel:(struct __CFString *)arg2 toPerson:(void *)arg3 property:(int)arg4;
+ (id)allValuesForPerson:(void *)arg1;
+ (id)preferredNameForPerson:(void *)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (float)_allValuesMatchScore:(id)arg1;
- (void *)_bestRecordMatchFromDictionary:(id)arg1 addressBook:(void *)arg2;
- (void)_postChangeNotification;
- (void)_reconcile:(void *)arg1 canPostChangeNotification:(BOOL)arg2;
- (id)_recordMatchDictionaryFromCFArray:(struct __CFArray *)arg1 followLinks:(BOOL)arg2 addressBook:(void *)arg3;
- (void)_setABRecordGUID:(id)arg1;
- (id)abDatabaseUID;
- (id)abRecordGUID;
- (id)allValues;
- (void *)copyABPersonWithAddressBook:(void *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasName;
- (id)init;
- (id)initWithABRecordGUID:(id)arg1 addressBook:(void *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinations:(id)arg1 addressBook:(void *)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void *)arg2;
- (id)initWithFavorite:(id)arg1 addressBook:(void *)arg2;
- (id)initials;
- (BOOL)isEqualToDictionaryRepresentation:(id)arg1;
- (BOOL)isLikePerson:(id)arg1;
- (id)primaryDestination;
- (void)refreshWithAddressBook:(void *)arg1;
- (BOOL)updateFromDictionaryRepresentation:(id)arg1;

@end


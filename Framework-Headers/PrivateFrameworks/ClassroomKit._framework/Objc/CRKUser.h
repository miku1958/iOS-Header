//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class CRKImage, NSData, NSPersonNameComponents, NSString;

@interface CRKUser : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _useMeCardIfAvailable;
    NSString *_userIdentifier;
    NSString *_displayName;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_phoneticGivenName;
    NSString *_phoneticFamilyName;
    NSString *_imageIdentifier;
    NSString *_imageURL;
    NSString *_userSource;
    long long _role;
    NSData *_userImageData;
    CRKImage *_userImage;
}

@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property (copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property (copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property (copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property (readonly, nonatomic) BOOL isMeCardUser;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property (copy, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property (nonatomic) long long role; // @synthesize role=_role;
@property (nonatomic, getter=shouldUseMeCardIfAvailable) BOOL useMeCardIfAvailable; // @synthesize useMeCardIfAvailable=_useMeCardIfAvailable;
@property (copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property (copy, nonatomic) CRKImage *userImage; // @synthesize userImage=_userImage;
@property (copy, nonatomic) NSData *userImageData; // @synthesize userImageData=_userImageData;
@property (copy, nonatomic) NSString *userSource; // @synthesize userSource=_userSource;

+ (id)customUserFromMeCardUser:(id)arg1;
+ (id)meCardUser;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToUser:(id)arg1;
- (void)updateUserImage;

@end


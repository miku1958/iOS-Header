//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/NSCopying-Protocol.h>
#import <ContactsUICore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isUnreachable;
    BOOL _isProposed;
    BOOL _hasBeenPersisted;
    NSString *_contactIdentifier;
    NSString *_formattedName;
    NSData *_imageData;
    long long _contactType;
    long long _whitelistStatus;
}

@property (readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, nonatomic) long long contactType; // @synthesize contactType=_contactType;
@property (readonly, nonatomic) NSString *formattedName; // @synthesize formattedName=_formattedName;
@property (readonly, nonatomic) BOOL hasBeenPersisted; // @synthesize hasBeenPersisted=_hasBeenPersisted;
@property (readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property (readonly, nonatomic) BOOL isProposed; // @synthesize isProposed=_isProposed;
@property (readonly, nonatomic) BOOL isUnreachable; // @synthesize isUnreachable=_isUnreachable;
@property (readonly, nonatomic) long long whitelistStatus; // @synthesize whitelistStatus=_whitelistStatus;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 formattedName:(id)arg2 imageData:(id)arg3 isUnreachable:(BOOL)arg4 isProposed:(BOOL)arg5 contactType:(long long)arg6 whitelistStatus:(long long)arg7 hasBeenPersisted:(BOOL)arg8;
- (BOOL)isEqual:(id)arg1;

@end


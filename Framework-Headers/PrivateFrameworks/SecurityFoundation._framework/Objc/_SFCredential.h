//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, _SFServiceIdentifier;

@interface _SFCredential : NSObject <NSSecureCoding, NSCopying>
{
    _SFServiceIdentifier *_primaryServiceIdentifier;
    NSArray *_supplementaryServiceIdentifiers;
    NSString *_label;
    NSString *_description;
    NSString *_persistentIdentifier;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSDictionary *_customAttributes;
    int _keyclass;
    NSString *_accessGroup;
    NSData *_changeToken;
}

@property (strong, nonatomic, getter=_accessGroup, setter=_setAccessGroup:) NSString *accessGroup;
@property (strong, nonatomic, getter=_changeToken, setter=_setChangeToken:) NSData *changeToken;
@property (copy, nonatomic, setter=_setCreationDate:) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (copy, nonatomic) NSDictionary *customAttributes; // @synthesize customAttributes=_customAttributes;
@property (nonatomic, getter=_keyclass, setter=_setKeyclass:) int keyclass;
@property (copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_description;
@property (copy, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_label;
@property (copy, nonatomic, setter=_setModificationDate:) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (copy, nonatomic, setter=_setPersistentIdentifier:) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property (strong, nonatomic) _SFServiceIdentifier *primaryServiceIdentifier; // @synthesize primaryServiceIdentifier=_primaryServiceIdentifier;
@property (strong, nonatomic) NSArray *supplementaryServiceIdentifiers;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithPrimaryServiceIdentifier:(id)arg1 supplementaryServiceIdentiifers:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


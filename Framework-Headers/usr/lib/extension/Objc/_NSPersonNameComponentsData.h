//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSPersonNameComponents, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsData : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_givenName;
    NSString *_familyName;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickname;
    NSPersonNameComponents *_phoneticRepresentation;
}

@property (copy) NSString *familyName; // @synthesize familyName=_familyName;
@property (copy) NSString *givenName; // @synthesize givenName=_givenName;
@property (copy) NSString *middleName; // @synthesize middleName=_middleName;
@property (copy) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property (copy) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property (copy) NSString *nickname; // @synthesize nickname=_nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation; // @synthesize phoneticRepresentation=_phoneticRepresentation;

+ (BOOL)supportsSecureCoding;
- (void)_freeIvars;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end


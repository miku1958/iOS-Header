//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantGuestDisplayPreferencesExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying>
{
    BOOL _nameFieldFirstNameOptional;
    BOOL _nameFieldLastNameOptional;
    BOOL _nameFieldShouldBeDisplayed;
    BOOL _emailAddressFieldShouldBeDisplayed;
    BOOL _phoneNumberFieldShouldBeDisplayed;
    BOOL _nameEditable;
    BOOL _emailAddressEditable;
    BOOL _phoneNumberEditable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL emailAddressEditable; // @synthesize emailAddressEditable=_emailAddressEditable;
@property (nonatomic) BOOL emailAddressFieldShouldBeDisplayed; // @synthesize emailAddressFieldShouldBeDisplayed=_emailAddressFieldShouldBeDisplayed;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL nameEditable; // @synthesize nameEditable=_nameEditable;
@property (nonatomic) BOOL nameFieldFirstNameOptional; // @synthesize nameFieldFirstNameOptional=_nameFieldFirstNameOptional;
@property (nonatomic) BOOL nameFieldLastNameOptional; // @synthesize nameFieldLastNameOptional=_nameFieldLastNameOptional;
@property (nonatomic) BOOL nameFieldShouldBeDisplayed; // @synthesize nameFieldShouldBeDisplayed=_nameFieldShouldBeDisplayed;
@property (nonatomic) BOOL phoneNumberEditable; // @synthesize phoneNumberEditable=_phoneNumberEditable;
@property (nonatomic) BOOL phoneNumberFieldShouldBeDisplayed; // @synthesize phoneNumberFieldShouldBeDisplayed=_phoneNumberFieldShouldBeDisplayed;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


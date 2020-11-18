//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCallDisplayContext.h>

@class NSPersonNameComponents, NSString;

@interface TUMutableCallDisplayContext : TUCallDisplayContext
{
}

@property (copy, nonatomic) NSString *callDirectoryExtensionIdentifier; // @dynamic callDirectoryExtensionIdentifier;
@property (copy, nonatomic) NSString *callDirectoryLabel; // @dynamic callDirectoryLabel;
@property (copy, nonatomic) NSString *callDirectoryLocalizedExtensionContainingAppName; // @dynamic callDirectoryLocalizedExtensionContainingAppName;
@property (copy, nonatomic) NSString *companyName; // @dynamic companyName;
@property (copy, nonatomic) NSString *contactIdentifier; // @dynamic contactIdentifier;
@property (copy, nonatomic) NSString *contactLabel; // @dynamic contactLabel;
@property (copy, nonatomic) NSString *contactName; // @dynamic contactName;
@property (copy, nonatomic) NSString *firstName; // @dynamic firstName;
@property (copy, nonatomic) NSString *label; // @dynamic label;
@property (nonatomic) int legacyAddressBookIdentifier; // @dynamic legacyAddressBookIdentifier;
@property (copy, nonatomic) NSString *location; // @dynamic location;
@property (copy, nonatomic) NSString *mapName; // @dynamic mapName;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (copy, nonatomic) NSPersonNameComponents *personNameComponents; // @dynamic personNameComponents;
@property (copy, nonatomic) NSString *suggestedName; // @dynamic suggestedName;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeValuesFromDisplayContext:(id)arg1;

@end


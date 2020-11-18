//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <EmailCore/ECEmailAddressConvertible-Protocol.h>

@class ECEmailAddress;

@interface NSString (ECEmailAddressQuoting) <ECEmailAddressConvertible>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *ec_messageIDSubstring;
@property (readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedDisplayName;
@property (readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedLocalPart;
@property (readonly, copy, nonatomic) NSString *ecemailaddress_uniquedDomain;
@property (readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;

+ (void)__ec_extractFirstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4 fromString:(id)arg5;
+ (id)ec_nameExtensions;
+ (id)ec_partialSurnames;
- (BOOL)ec_appearsToBeAnInitial;
- (id)ec_personNameComponents;
- (id)ec_trimCommasSpacesQuotes;
- (id)ecemailaddress_quotedString;
@end

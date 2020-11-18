//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface WFPhoneNumber : NSObject <WFNaming, NSCopying, WFSerializableContent>
{
    NSString *_string;
    NSString *_contactName;
    NSString *_label;
}

@property (readonly, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, nonatomic) NSString *normalizedPhoneNumber;
@property (readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)phoneNumberWithPhoneNumberString:(id)arg1;
+ (id)phoneNumberWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3;
+ (id)phoneNumberWithTextCheckingResult:(id)arg1;
+ (id)phoneNumbersInString:(id)arg1 error:(id *)arg2;
+ (BOOL)stringContainsPhoneNumbers:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)wfSerializedRepresentation;

@end

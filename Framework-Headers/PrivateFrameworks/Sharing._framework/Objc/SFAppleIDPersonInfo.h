//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface SFAppleIDPersonInfo : NSObject <NSSecureCoding>
{
    BOOL _didMatchEmail;
    BOOL _didMatchPhone;
    NSString *_accountIdentifier;
    NSString *_altDSID;
    long long _certificateStatus;
    NSString *_matchedValue;
    NSDate *_validUntilDate;
}

@property (readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (readonly, nonatomic) long long certificateStatus; // @synthesize certificateStatus=_certificateStatus;
@property (readonly, nonatomic) BOOL didMatchEmail; // @synthesize didMatchEmail=_didMatchEmail;
@property (readonly, nonatomic) BOOL didMatchPhone; // @synthesize didMatchPhone=_didMatchPhone;
@property (readonly, nonatomic) BOOL isStale;
@property (readonly, nonatomic) NSString *matchedValue; // @synthesize matchedValue=_matchedValue;
@property (readonly, nonatomic) NSDate *validUntilDate; // @synthesize validUntilDate=_validUntilDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPersonInfo:(id)arg1;

@end


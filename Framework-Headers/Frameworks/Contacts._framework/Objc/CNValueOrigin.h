//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localizedApplicationName;
    NSString *_donationIdentifier;
}

@property (readonly, copy, nonatomic) NSString *donationIdentifier; // @synthesize donationIdentifier=_donationIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedApplicationName; // @synthesize localizedApplicationName=_localizedApplicationName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedApplicationName:(id)arg1 donationIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end


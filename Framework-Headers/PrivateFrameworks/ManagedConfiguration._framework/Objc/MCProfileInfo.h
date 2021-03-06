//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfiguration/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface MCProfileInfo : NSObject <NSSecureCoding>
{
    NSString *_friendlyName;
    NSString *_profileDescription;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    NSDate *_expiryDate;
}

@property (strong, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property (strong, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property (strong, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property (strong, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface HMSetupAccessoryPayload : NSObject <NSSecureCoding>
{
    BOOL _supportsIP;
    BOOL _supportsWAC;
    BOOL _supportsBTLE;
    BOOL _paired;
    NSString *_accessoryName;
    NSString *_setupCode;
    NSString *_setupID;
    NSNumber *_categoryNumber;
    NSNumber *_flags;
    NSURL *_setupPayloadURL;
}

@property (strong, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property (strong, nonatomic) NSNumber *categoryNumber; // @synthesize categoryNumber=_categoryNumber;
@property (strong, nonatomic) NSNumber *flags; // @synthesize flags=_flags;
@property (nonatomic) BOOL paired; // @synthesize paired=_paired;
@property (strong, nonatomic) NSString *setupCode; // @synthesize setupCode=_setupCode;
@property (strong, nonatomic) NSString *setupID; // @synthesize setupID=_setupID;
@property (strong, nonatomic) NSURL *setupPayloadURL; // @synthesize setupPayloadURL=_setupPayloadURL;
@property (nonatomic) BOOL supportsBTLE; // @synthesize supportsBTLE=_supportsBTLE;
@property (nonatomic) BOOL supportsIP; // @synthesize supportsIP=_supportsIP;
@property (nonatomic) BOOL supportsWAC; // @synthesize supportsWAC=_supportsWAC;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_parseSetupPayload:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupPayload:(id)arg1;
- (id)initWithSetupPayloadURL:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;

@end


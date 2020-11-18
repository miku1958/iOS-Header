//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isInHomeCountry;
    BOOL _changedDueToSimRemoval;
    BOOL _isRegistrationForcedHome;
    NSString *_registrationDisplayStatus;
}

@property (nonatomic) BOOL changedDueToSimRemoval; // @synthesize changedDueToSimRemoval=_changedDueToSimRemoval;
@property (nonatomic) BOOL isInHomeCountry; // @synthesize isInHomeCountry=_isInHomeCountry;
@property (nonatomic) BOOL isRegistrationForcedHome; // @synthesize isRegistrationForcedHome=_isRegistrationForcedHome;
@property (strong, nonatomic) NSString *registrationDisplayStatus; // @synthesize registrationDisplayStatus=_registrationDisplayStatus;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


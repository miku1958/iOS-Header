//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CTServiceDisconnectionStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _activationFailure;
    int _contextType;
    int _error;
    NSString *_apnName;
    NSNumber *_connectionMask;
    NSNumber *_rawCauseCode;
    NSNumber *_pdp;
}

@property (nonatomic) BOOL activationFailure; // @synthesize activationFailure=_activationFailure;
@property (strong, nonatomic) NSString *apnName; // @synthesize apnName=_apnName;
@property (strong, nonatomic) NSNumber *connectionMask; // @synthesize connectionMask=_connectionMask;
@property (nonatomic) int contextType; // @synthesize contextType=_contextType;
@property (nonatomic) int error; // @synthesize error=_error;
@property (strong, nonatomic) NSNumber *pdp; // @synthesize pdp=_pdp;
@property (strong, nonatomic) NSNumber *rawCauseCode; // @synthesize rawCauseCode=_rawCauseCode;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


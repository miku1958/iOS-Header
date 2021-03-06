//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTIMSRegistrationTransportInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isRegistered;
    int _contextType;
    int _transportType;
}

@property (nonatomic) int contextType; // @synthesize contextType=_contextType;
@property (nonatomic) BOOL isRegistered; // @synthesize isRegistered=_isRegistered;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


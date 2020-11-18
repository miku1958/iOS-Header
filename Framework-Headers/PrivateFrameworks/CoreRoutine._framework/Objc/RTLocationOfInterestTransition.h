//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface RTLocationOfInterestTransition : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSDate *_startDate;
    NSDate *_stopDate;
    NSUUID *_visitIdentifierOrigin;
    NSUUID *_visitIdentifierDestination;
    long long _modeOfTransportation;
}

@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) long long modeOfTransportation; // @synthesize modeOfTransportation=_modeOfTransportation;
@property (readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, copy, nonatomic) NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property (readonly, nonatomic) NSUUID *visitIdentifierDestination; // @synthesize visitIdentifierDestination=_visitIdentifierDestination;
@property (readonly, nonatomic) NSUUID *visitIdentifierOrigin; // @synthesize visitIdentifierOrigin=_visitIdentifierOrigin;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 modeOfTransportation:(long long)arg6;
- (BOOL)isEqual:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSUUID, RTApplication, RTSource;

@interface RTPredictedApplication : NSObject <NSSecureCoding, NSCopying>
{
    RTApplication *_application;
    long long _reason;
    RTSource *_source;
    double _confidence;
    NSUUID *_identifier;
}

@property (readonly, nonatomic) RTApplication *application; // @synthesize application=_application;
@property (readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property (strong, nonatomic) RTSource *source; // @synthesize source=_source;

+ (id)reasonToString:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithApplication:(id)arg1 reason:(long long)arg2 confidence:(double)arg3 source:(id)arg4 identifier:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

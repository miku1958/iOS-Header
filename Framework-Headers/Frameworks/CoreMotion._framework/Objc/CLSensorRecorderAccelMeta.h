//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CLSensorRecorderAccelMeta : NSObject <NSSecureCoding>
{
    BOOL _movement;
    unsigned int _offset;
    unsigned int _dataSize;
    unsigned long long _identifier;
    double _startTime;
    unsigned long long _timestamp;
    unsigned long long _dataIdentifier;
}

@property unsigned long long dataIdentifier; // @synthesize dataIdentifier=_dataIdentifier;
@property unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
@property BOOL movement; // @synthesize movement=_movement;
@property unsigned int offset; // @synthesize offset=_offset;
@property double startTime; // @synthesize startTime=_startTime;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

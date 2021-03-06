//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSDate;

@interface NPLocation : NSObject <NSSecureCoding>
{
    double _latitude;
    double _longtitude;
    NSDate *_timestamp;
}

@property (readonly) BOOL isValid;
@property double latitude; // @synthesize latitude=_latitude;
@property double longtitude; // @synthesize longtitude=_longtitude;
@property (strong, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longtitude:(double)arg2 timestamp:(id)arg3;

@end


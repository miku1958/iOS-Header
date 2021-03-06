//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSData;

@interface GEOJunction : NSObject <NSSecureCoding>
{
    int _maneuverType;
    int _drivingSide;
    int _junctionType;
    NSData *_elementsData;
}

@property (readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property (readonly, nonatomic) struct GEOJunctionElement *elements;
@property (readonly, nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
@property (readonly, nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property (readonly, nonatomic) unsigned long long numElements;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJunctionInfo:(id)arg1;
- (id)initWithManeuverType:(int)arg1 drivingSide:(int)arg2;
- (id)initWithStep:(id)arg1;

@end


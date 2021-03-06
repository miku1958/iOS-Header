//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@interface MKJunction : NSObject <NSSecureCoding>
{
    struct GEOJunctionElement *_elements;
    unsigned long long _count;
    int _type;
    int _maneuver;
    int _drivingSide;
    struct GEOJunctionElement *_snapped[8];
}

@property (readonly, nonatomic) int type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)getArrowPath:(id *)arg1 arrowStrokePath:(id *)arg2 intersectionBackgroundPath:(id *)arg3 strokePath:(id *)arg4 withSize:(struct CGSize)arg5 metrics:(CDStruct_715e5093)arg6 drivingSide:(int)arg7 visualCenter:(struct CGPoint *)arg8;
- (void)getArrowPath:(id *)arg1 arrowStrokePath:(id *)arg2 pivot:(struct CGPoint *)arg3 withSize:(struct CGSize)arg4 metrics:(CDStruct_715e5093)arg5 visualCenter:(struct CGPoint *)arg6;
- (void)getRoundaboutArrowPath:(id *)arg1 intersectionBackgroundPath:(id *)arg2 strokePath:(id *)arg3 withSize:(struct CGSize)arg4 metrics:(CDStruct_715e5093)arg5 drivingSide:(int)arg6 visualCenter:(struct CGPoint *)arg7;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJunction:(id)arg1;
- (id)initWithType:(int)arg1 maneuver:(int)arg2 drivingSide:(int)arg3 elements:(struct GEOJunctionElement *)arg4 count:(unsigned long long)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)roundaboutArrowWithSize:(struct CGSize)arg1 metrics:(CDStruct_715e5093)arg2 outerRadius:(double)arg3 endAngle:(double)arg4 pivot:(struct CGPoint *)arg5;

@end


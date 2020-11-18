//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_1e94be47 *v;
    GEOFeatureStyleAttributes *_sharedAttributes;
    CDStruct_d008d4b8 *extAttrs;
    unsigned char countExtAttrs;
    unsigned char countAttrs;
    BOOL featureType;
}

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (int)drivingSide;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)featureType;
- (BOOL)hasAttributes;
- (BOOL)hasDrivingSide;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributes:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGEOStyleAttributes:(id)arg1;
- (id)initWithPlaceDataStyleAttributes:(id)arg1;
- (id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const CDStruct_d008d4b8 *)arg2 extAttributeCount:(unsigned char)arg3;
- (id)initWithStyleAttributes:(id)arg1;
- (BOOL)isBorder;
- (BOOL)isBridge;
- (BOOL)isDrivable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFreeway;
- (BOOL)isRailway;
- (BOOL)isRamp;
- (BOOL)isSuperset:(id)arg1;
- (BOOL)isTunnel;
- (BOOL)isWalkable;
- (unsigned int)lineType;
- (int)rampDirection;
- (int)rampType;
- (void)removeKey:(unsigned int)arg1;
- (void)replaceAttributes:(const CDStruct_1e94be47 *)arg1 count:(unsigned int)arg2;
- (void)setExtAttributes:(const CDStruct_d008d4b8 *)arg1 count:(unsigned int)arg2;
- (BOOL)shouldSuppress3DBuildingStrokes;
- (void)sort;

@end


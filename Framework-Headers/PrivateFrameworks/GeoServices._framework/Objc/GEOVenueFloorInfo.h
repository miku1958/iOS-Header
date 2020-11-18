//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueFloorInfo-Protocol.h>

@class NSString;

@interface GEOVenueFloorInfo : NSObject <GEOVenueFloorInfo>
{
    short _ordinal;
    unsigned long long _levelID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long levelID; // @synthesize levelID=_levelID;
@property (readonly, nonatomic) short ordinal; // @synthesize ordinal=_ordinal;
@property (readonly) Class superclass;

+ (id)floorInfosFromLevels:(id)arg1;
+ (BOOL)isIntegerValidOrdinal:(long long)arg1;
- (id)init;
- (id)initWithLevel:(id)arg1;
- (id)initWithOrdinal:(short)arg1 levelID:(unsigned long long)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueComponentIdentifier-Protocol.h>

@class NSArray, NSString;
@protocol GEOVenueFloorInfo;

@interface GEOVenueComponentIdentifier : NSObject <GEOVenueComponentIdentifier>
{
    BOOL _hasBuildingID;
    unsigned long long _buildingID;
    id<GEOVenueFloorInfo> _floorInfo;
    NSArray *_sectionIDs;
    BOOL _hasUnitID;
    unsigned long long _unitID;
    BOOL _hasFixtureID;
    unsigned long long _fixtureID;
}

@property (readonly, nonatomic) unsigned long long buildingID; // @synthesize buildingID=_buildingID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long fixtureID; // @synthesize fixtureID=_fixtureID;
@property (readonly, nonatomic) id<GEOVenueFloorInfo> floorInfo; // @synthesize floorInfo=_floorInfo;
@property (readonly, nonatomic, getter=_hasBuildingID) BOOL hasBuildingID; // @synthesize hasBuildingID=_hasBuildingID;
@property (readonly, nonatomic, getter=_hasFixtureID) BOOL hasFixtureID; // @synthesize hasFixtureID=_hasFixtureID;
@property (readonly, nonatomic, getter=_hasUnitID) BOOL hasUnitID; // @synthesize hasUnitID=_hasUnitID;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *sectionIDs; // @synthesize sectionIDs=_sectionIDs;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long unitID; // @synthesize unitID=_unitID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBuildingID:(unsigned long long)arg1;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 fixtureID:(unsigned long long)arg3;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 unitID:(unsigned long long)arg3;
- (id)initWithVenueIdentifier:(id)arg1;

@end


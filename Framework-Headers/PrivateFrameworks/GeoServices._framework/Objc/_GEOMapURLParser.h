//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOUserSessionEntity, NSString, NSURL;

@interface _GEOMapURLParser : NSObject
{
    NSURL *_url;
    int _mapType;
    int _transportType;
    int _trackingMode;
    BOOL _exactPositionSpecified;
    CDStruct_2c43369c _centerCoordinate;
    CDStruct_951efa70 _span;
    float _zoomLevel;
    NSString *_addressString;
    NSString *_directionsSourceAddressString;
    NSString *_directionsDestinationAddressString;
    NSString *_searchQuery;
    CDStruct_2c43369c _searchCoordinate;
    struct {
        CDStruct_2c43369c center;
        CDStruct_951efa70 span;
    } _searchRegion;
    int _searchProviderID;
    unsigned long long _searchUID;
    NSString *_contentProvider;
    NSString *_contentProviderID;
    NSString *_abRecordID;
    NSString *_abAddressID;
    GEOUserSessionEntity *_userSessionEntity;
    double _altitude;
    double _rotation;
    double _tilt;
    double _roll;
    unsigned long long _lineMUID;
    NSString *_lineName;
    long long _favoritesType;
    BOOL _tester;
}

@property (readonly) NSString *abAddressID; // @synthesize abAddressID=_abAddressID;
@property (readonly) NSString *abRecordID; // @synthesize abRecordID=_abRecordID;
@property (readonly) NSString *addressString; // @synthesize addressString=_addressString;
@property (readonly) double altitude; // @synthesize altitude=_altitude;
@property (readonly) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property (readonly) NSString *contentProvider; // @synthesize contentProvider=_contentProvider;
@property (readonly) NSString *contentProviderID; // @synthesize contentProviderID=_contentProviderID;
@property (readonly) NSString *directionsDestinationAddressString; // @synthesize directionsDestinationAddressString=_directionsDestinationAddressString;
@property (readonly) NSString *directionsSourceAddressString; // @synthesize directionsSourceAddressString=_directionsSourceAddressString;
@property (readonly) BOOL exactPositionSpecified; // @synthesize exactPositionSpecified=_exactPositionSpecified;
@property (readonly) long long favoritesType; // @synthesize favoritesType=_favoritesType;
@property (readonly) unsigned long long lineMUID; // @synthesize lineMUID=_lineMUID;
@property (readonly, copy) NSString *lineName; // @synthesize lineName=_lineName;
@property (readonly) int mapType; // @synthesize mapType=_mapType;
@property (readonly) double roll; // @synthesize roll=_roll;
@property (readonly) double rotation; // @synthesize rotation=_rotation;
@property (readonly) CDStruct_c3b9c2ee searchCoordinate; // @synthesize searchCoordinate=_searchCoordinate;
@property (readonly) int searchProviderID; // @synthesize searchProviderID=_searchProviderID;
@property (readonly) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property (readonly) CDStruct_90e2a262 searchRegion; // @synthesize searchRegion=_searchRegion;
@property (readonly) unsigned long long searchUID; // @synthesize searchUID=_searchUID;
@property (readonly) CDStruct_c3b9c2ee span; // @synthesize span=_span;
@property (readonly) BOOL tester; // @synthesize tester=_tester;
@property (readonly) double tilt; // @synthesize tilt=_tilt;
@property (readonly) int trackingMode; // @synthesize trackingMode=_trackingMode;
@property (readonly) int transportType; // @synthesize transportType=_transportType;
@property (readonly) GEOUserSessionEntity *userSessionEntity; // @synthesize userSessionEntity=_userSessionEntity;
@property (readonly) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;

+ (BOOL)isValidMapURL:(id)arg1;
+ (BOOL)isValidMapsCategoryURL:(id)arg1;
+ (BOOL)isValidMapsURLForAppendingSharedSessionID:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (BOOL)parseIncludingCustomParameters:(BOOL)arg1;

@end

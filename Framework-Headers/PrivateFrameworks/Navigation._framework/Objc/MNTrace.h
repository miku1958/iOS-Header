//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MNTrace : NSObject
{
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSArray *_bookmarks;
    NSArray *_bookmarkImages;
    unsigned long long _version;
    unsigned long long _originalVersion;
    BOOL _isSimulation;
    BOOL _isRouteGenius;
    BOOL _usesCLMapCorrection;
    double _initialCourse;
    NSArray *_locations;
    NSArray *_directions;
    NSArray *_etaUpdates;
    NSArray *_headingData;
    NSArray *_motionData;
    NSArray *_vehicleHeadingData;
    NSArray *_vehicleSpeedData;
    NSData *_startWaypointData;
    NSData *_endWaypointData;
    NSArray *_routeSelections;
    NSArray *_annotatedUserBehavior;
    NSArray *_annotatedUserEnvironments;
    NSArray *_commuteDestinations;
    NSArray *_commuteDirectionsRequests;
    BOOL _copyToCrashReporter;
    int _mainTransportType;
    NSString *_tracePath;
    NSDictionary *_miscInfo;
    NSArray *_navigationEvents;
}

@property (strong, nonatomic) NSArray *annotatedUserBehavior; // @synthesize annotatedUserBehavior=_annotatedUserBehavior;
@property (strong, nonatomic) NSArray *annotatedUserEnvironments; // @synthesize annotatedUserEnvironments=_annotatedUserEnvironments;
@property (strong, nonatomic) NSArray *bookmarkImages; // @synthesize bookmarkImages=_bookmarkImages;
@property (strong, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
@property (strong, nonatomic) NSArray *commuteDestinations; // @synthesize commuteDestinations=_commuteDestinations;
@property (strong, nonatomic) NSArray *commuteDirectionsRequests; // @synthesize commuteDirectionsRequests=_commuteDirectionsRequests;
@property (nonatomic) BOOL copyToCrashReporter; // @synthesize copyToCrashReporter=_copyToCrashReporter;
@property (readonly, nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property (strong, nonatomic) NSArray *directions; // @synthesize directions=_directions;
@property (strong, nonatomic) NSData *endWaypointData; // @synthesize endWaypointData=_endWaypointData;
@property (strong, nonatomic) NSArray *etaUpdates; // @synthesize etaUpdates=_etaUpdates;
@property (strong, nonatomic) NSArray *headingData; // @synthesize headingData=_headingData;
@property (nonatomic) double initialCourse; // @synthesize initialCourse=_initialCourse;
@property (nonatomic) BOOL isRouteGenius; // @synthesize isRouteGenius=_isRouteGenius;
@property (nonatomic) BOOL isSimulation; // @synthesize isSimulation=_isSimulation;
@property (strong, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property (readonly, nonatomic) int mainTransportType; // @synthesize mainTransportType=_mainTransportType;
@property (strong, nonatomic) NSDictionary *miscInfo; // @synthesize miscInfo=_miscInfo;
@property (strong, nonatomic) NSArray *motionData; // @synthesize motionData=_motionData;
@property (strong, nonatomic) NSArray *navigationEvents; // @synthesize navigationEvents=_navigationEvents;
@property (nonatomic) unsigned long long originalVersion; // @synthesize originalVersion=_originalVersion;
@property (strong, nonatomic) NSArray *routeSelections; // @synthesize routeSelections=_routeSelections;
@property (strong, nonatomic) NSData *startWaypointData; // @synthesize startWaypointData=_startWaypointData;
@property (readonly, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property (nonatomic) BOOL usesCLMapCorrection; // @synthesize usesCLMapCorrection=_usesCLMapCorrection;
@property (strong, nonatomic) NSArray *vehicleHeadingData; // @synthesize vehicleHeadingData=_vehicleHeadingData;
@property (strong, nonatomic) NSArray *vehicleSpeedData; // @synthesize vehicleSpeedData=_vehicleSpeedData;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *writeGroup; // @synthesize writeGroup=_writeGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;

- (void).cxx_destruct;
- (id)_handleOpenErrorWithPath:(id)arg1;
- (BOOL)closeTrace;
- (void)copyTraceToCrashReporter;
- (BOOL)createTempTraceForRecording;
- (void)dealloc;
- (id)init;
- (BOOL)openTrace:(id)arg1 outError:(id *)arg2;
- (id)serializableBookmarks;
- (BOOL)startWritingTraceToFile:(id)arg1;
- (BOOL)startWritingTraceToPath:(id)arg1;

@end


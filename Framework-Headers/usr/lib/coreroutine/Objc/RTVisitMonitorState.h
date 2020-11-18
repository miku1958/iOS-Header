//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>
#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSMutableArray, RTVisit;

@interface RTVisitMonitorState : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _insideAnLoi;
    BOOL _insideAnLoiButStatTimeNotMet;
    BOOL _entryEdgeDetected;
    BOOL _checkedForHintNearEntryLocation;
    double _lastProcessedSample_s;
    double _potentialEntry_s;
    double _potentialExit_s;
    double _sumLat_deg;
    double _sumLon_deg;
    double _sumLat2_deg;
    double _sumLon2_deg;
    double _entrySampleLat_deg;
    double _entrySampleLon_deg;
    long long _dataPointCnt;
    long long _adaptionSampleCnt;
    double _lastProcessedSampleForAdaption_s;
    long long _outlierCnt;
    NSMutableArray *_tempOutliers;
    RTVisit *_lastVisitIncident;
    RTVisit *_lastLowConfidenceVisitIncident;
    long long _pendingReprocessRequestCount;
    long long _visitCallCnt;
    long long _lowConfidenceVisitStatus;
}

@property (nonatomic) long long adaptionSampleCnt; // @synthesize adaptionSampleCnt=_adaptionSampleCnt;
@property (nonatomic) BOOL checkedForHintNearEntryLocation; // @synthesize checkedForHintNearEntryLocation=_checkedForHintNearEntryLocation;
@property (nonatomic) long long dataPointCnt; // @synthesize dataPointCnt=_dataPointCnt;
@property (nonatomic) BOOL entryEdgeDetected; // @synthesize entryEdgeDetected=_entryEdgeDetected;
@property (nonatomic) double entrySampleLat_deg; // @synthesize entrySampleLat_deg=_entrySampleLat_deg;
@property (nonatomic) double entrySampleLon_deg; // @synthesize entrySampleLon_deg=_entrySampleLon_deg;
@property (nonatomic) BOOL insideAnLoi; // @synthesize insideAnLoi=_insideAnLoi;
@property (nonatomic) BOOL insideAnLoiButStatTimeNotMet; // @synthesize insideAnLoiButStatTimeNotMet=_insideAnLoiButStatTimeNotMet;
@property (strong, nonatomic) RTVisit *lastLowConfidenceVisitIncident; // @synthesize lastLowConfidenceVisitIncident=_lastLowConfidenceVisitIncident;
@property (nonatomic) double lastProcessedSampleForAdaption_s; // @synthesize lastProcessedSampleForAdaption_s=_lastProcessedSampleForAdaption_s;
@property (nonatomic) double lastProcessedSample_s; // @synthesize lastProcessedSample_s=_lastProcessedSample_s;
@property (strong, nonatomic) RTVisit *lastVisitIncident; // @synthesize lastVisitIncident=_lastVisitIncident;
@property (nonatomic) long long lowConfidenceVisitStatus; // @synthesize lowConfidenceVisitStatus=_lowConfidenceVisitStatus;
@property (nonatomic) long long outlierCnt; // @synthesize outlierCnt=_outlierCnt;
@property (nonatomic) long long pendingReprocessRequestCount; // @synthesize pendingReprocessRequestCount=_pendingReprocessRequestCount;
@property (nonatomic) double potentialEntry_s; // @synthesize potentialEntry_s=_potentialEntry_s;
@property (nonatomic) double potentialExit_s; // @synthesize potentialExit_s=_potentialExit_s;
@property (nonatomic) double sumLat2_deg; // @synthesize sumLat2_deg=_sumLat2_deg;
@property (nonatomic) double sumLat_deg; // @synthesize sumLat_deg=_sumLat_deg;
@property (nonatomic) double sumLon2_deg; // @synthesize sumLon2_deg=_sumLon2_deg;
@property (nonatomic) double sumLon_deg; // @synthesize sumLon_deg=_sumLon_deg;
@property (strong, nonatomic) NSMutableArray *tempOutliers; // @synthesize tempOutliers=_tempOutliers;
@property (nonatomic) long long visitCallCnt; // @synthesize visitCallCnt=_visitCallCnt;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dump;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end


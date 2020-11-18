//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString, TRIClient;

@interface HMITuriTrialManager : HMFObject <HMFLogging>
{
    TRIClient *_trialClient;
    NSString *_compiledModelArchivePath;
    double _personThresholdHigh;
    double _personThresholdMedium;
    double _petThresholdHigh;
    double _petThresholdMedium;
    double _vehicleThresholdHigh;
    double _vehicleThresholdMedium;
    double _faceThreshold;
    NSString *_modelPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double faceThreshold; // @synthesize faceThreshold=_faceThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property (readonly) double personThresholdHigh; // @synthesize personThresholdHigh=_personThresholdHigh;
@property (readonly) double personThresholdMedium; // @synthesize personThresholdMedium=_personThresholdMedium;
@property (readonly) double petThresholdHigh; // @synthesize petThresholdHigh=_petThresholdHigh;
@property (readonly) double petThresholdMedium; // @synthesize petThresholdMedium=_petThresholdMedium;
@property (readonly) Class superclass;
@property (readonly) double vehicleThresholdHigh; // @synthesize vehicleThresholdHigh=_vehicleThresholdHigh;
@property (readonly) double vehicleThresholdMedium; // @synthesize vehicleThresholdMedium=_vehicleThresholdMedium;

+ (id)logCategory;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)configure;
- (BOOL)loadModelFromTrialWithError:(id *)arg1;
- (void)registerForTrialUpdates;
- (void)submitUpdateModelTask;
- (void)updateLevels;

@end

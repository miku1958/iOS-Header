//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMICameraVideoAnalyzerResult, HMICameraVideoFragment, NSError;
@protocol HMDCameraRecordingSessionVideoAnalyzer;

@protocol HMDCameraRecordingSessionVideoAnalyzerDelegate <NSObject>
- (void)analyzer:(id<HMDCameraRecordingSessionVideoAnalyzer>)arg1 didAnalyzeFragment:(HMICameraVideoFragment *)arg2 withResult:(HMICameraVideoAnalyzerResult *)arg3;
- (void)analyzer:(id<HMDCameraRecordingSessionVideoAnalyzer>)arg1 didFailAnalysisForFragment:(HMICameraVideoFragment *)arg2 withError:(NSError *)arg3;
- (void)analyzer:(id<HMDCameraRecordingSessionVideoAnalyzer>)arg1 didNotAnalyzeFragment:(HMICameraVideoFragment *)arg2 withResult:(HMICameraVideoAnalyzerResult *)arg3;
@end


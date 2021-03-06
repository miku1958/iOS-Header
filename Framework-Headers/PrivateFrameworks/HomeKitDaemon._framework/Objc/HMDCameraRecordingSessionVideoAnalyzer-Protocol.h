//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMICameraVideoFragment, HMIHomePersonManager, NSSet;
@protocol HMDCameraRecordingSessionVideoAnalyzerDelegate;

@protocol HMDCameraRecordingSessionVideoAnalyzer <NSObject>

@property (weak) id<HMDCameraRecordingSessionVideoAnalyzerDelegate> delegate;
@property (copy) NSSet *externalPersonManagers;
@property (strong) HMIHomePersonManager *homePersonManager;

- (void)analyzeFragment:(HMICameraVideoFragment *)arg1;
- (void)clearPendingFragments;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSString, PHAAnalysisStateObserver;

@protocol PHAAnalysisStateObserverDelegate <NSObject>
- (void)analysisStateObserver:(PHAAnalysisStateObserver *)arg1 didChangeAnalysisStateTo:(int)arg2 from:(int)arg3 assetIdentifier:(NSString *)arg4 workerFlags:(int)arg5 workerType:(short)arg6;
@end

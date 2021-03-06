//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSDate;
@protocol PGGraphHealthRecording;

@protocol PGGraphDataModelEnrichmentHealthRecording <NSObject>
- (void)recordCurrentProcessingDate:(NSDate *)arg1 lastProcessingDate:(NSDate *)arg2 graphHealthRecorder:(id<PGGraphHealthRecording>)arg3;
- (void)recordProcessingWasCancelledWithGraphHealthRecorder:(id<PGGraphHealthRecording>)arg1;
@end


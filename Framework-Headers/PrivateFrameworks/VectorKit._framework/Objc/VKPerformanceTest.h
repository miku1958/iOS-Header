//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, VKMapView;

__attribute__((visibility("hidden")))
@interface VKPerformanceTest : NSObject
{
    VKMapView *_mapView;
    BOOL _running;
    int _loopCounter;
    int _resultCount;
    struct VKPerformanceTestResult_struct *_results;
    NSString *_outputHeader;
}

+ (void)runWithMapView:(id)arg1 outputHeader:(id)arg2;
- (void)abort;
- (void)dealloc;
- (id)initWithMapView:(id)arg1 outputHeader:(id)arg2;
- (void)loop;
- (void)printResults;
- (void)runTest:(int)arg1 step:(int)arg2;
- (void)tick:(int)arg1;

@end


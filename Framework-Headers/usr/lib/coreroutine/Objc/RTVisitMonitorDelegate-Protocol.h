//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSError, RTVisit, RTVisitMonitorState;

@protocol RTVisitMonitorDelegate <NSObject>

@optional
- (void)onLeechedVisitIncident:(RTVisit *)arg1 error:(NSError *)arg2;
- (void)onLowConfidenceVisitIncident:(RTVisit *)arg1 error:(NSError *)arg2;
- (void)onVisitIncident:(RTVisit *)arg1 error:(NSError *)arg2;
- (void)onVisitMonitorStateChanged:(RTVisitMonitorState *)arg1;
@end


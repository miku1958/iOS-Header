//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTVisit;

@interface RTVisitMonitorState : NSObject
{
    RTVisit *_lastVisitIncident;
    RTVisit *_lastLowConfidenceVisitIncident;
}

@property (strong, nonatomic) RTVisit *lastLowConfidenceVisitIncident; // @synthesize lastLowConfidenceVisitIncident=_lastLowConfidenceVisitIncident;
@property (strong, nonatomic) RTVisit *lastVisitIncident; // @synthesize lastVisitIncident=_lastVisitIncident;

- (void).cxx_destruct;
- (void)dump;
- (id)init;
- (id)initWithLastVisit:(id)arg1 lastLowConfidenceVisit:(id)arg2;

@end

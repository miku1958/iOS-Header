//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class RTVisitIncident;

@interface RTVisitManagerLeechedVisitIncidentNotification : RTNotification
{
    RTVisitIncident *_visitIncident;
}

@property (readonly, nonatomic) RTVisitIncident *visitIncident; // @synthesize visitIncident=_visitIncident;

- (void).cxx_destruct;
- (id)initWithVisitIncident:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class NSString;

@interface RTNavigationManagerRouteSummaryNotification : RTNotification
{
    double _originLatitude;
    double _originLongitude;
    NSString *_destinationName;
    double _destinationLatitude;
    double _destinationLongitude;
}

@property (nonatomic) double destinationLatitude; // @synthesize destinationLatitude=_destinationLatitude;
@property (nonatomic) double destinationLongitude; // @synthesize destinationLongitude=_destinationLongitude;
@property (strong, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property (nonatomic) double originLatitude; // @synthesize originLatitude=_originLatitude;
@property (nonatomic) double originLongitude; // @synthesize originLongitude=_originLongitude;

- (void).cxx_destruct;
- (id)initWithRouteSummary:(id)arg1;

@end


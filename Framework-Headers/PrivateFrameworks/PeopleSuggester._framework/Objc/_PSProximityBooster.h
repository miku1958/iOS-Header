//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPPeopleDiscovery;

@interface _PSProximityBooster : NSObject
{
    RPPeopleDiscovery *_peopleDiscovery;
}

@property (strong, nonatomic) RPPeopleDiscovery *peopleDiscovery; // @synthesize peopleDiscovery=_peopleDiscovery;

- (void).cxx_destruct;
- (id)init;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;
- (id)suggestionsByBoostingNearbySuggestions:(id)arg1;

@end


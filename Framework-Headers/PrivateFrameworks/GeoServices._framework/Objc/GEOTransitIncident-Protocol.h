//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol GEOTransitIncident <NSObject>

@property (readonly, nonatomic) NSArray *affectedEntities;
@property (readonly, nonatomic, getter=isBlockingIncident) BOOL blockingIncident;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) long long iconType;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) NSString *messageForNonRoutable;
@property (readonly, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *title;

@end


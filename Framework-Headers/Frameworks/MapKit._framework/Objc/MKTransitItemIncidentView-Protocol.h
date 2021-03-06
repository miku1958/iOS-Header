//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol GEOTransitIncident, GEOTransitRoutingIncidentMessage;

@protocol MKTransitItemIncidentView <NSObject>

@property (nonatomic) BOOL padBottom;
@property (nonatomic) long long position;

- (void)configureWithIncident:(id<GEOTransitIncident>)arg1 referenceDate:(NSDate *)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4;
- (void)configureWithIncidentMessage:(id<GEOTransitRoutingIncidentMessage>)arg1 referenceDate:(NSDate *)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4;
- (void)configureWithMessage:(NSString *)arg1 incident:(id<GEOTransitIncident>)arg2 referenceDate:(NSDate *)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5;
@end


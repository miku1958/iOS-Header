//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKInactiveTransitLine-Protocol.h>

@class NSDate, NSString, NSTimeZone;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine>
{
    id<GEOTransitLine> _line;
    BOOL _blocked;
    NSDate *_serviceResumesDate;
    NSTimeZone *_timeZone;
    NSDate *_referenceDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<GEOTransitLine> line;
@property (readonly, nonatomic) NSString *serviceResumesDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithTransitLine:(id)arg1 blocked:(BOOL)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOTransitTimeRange-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTimeRange : NSObject <GEOTransitTimeRange>
{
    CDStruct_43c37391 _pbTimeRange;
    CDStruct_43c37391 _pdTimeRange;
    BOOL _usePB;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double startTime;
@property (readonly) Class superclass;

- (BOOL)contains:(id)arg1;
- (id)initWithPBTimeRange:(CDStruct_43c37391)arg1;
- (id)initWithPDTimeRange:(CDStruct_43c37391)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMapTable, RadioGetTracksResponse, RadioStation;

@interface MPCRadioStationPreparationContext : NSObject
{
    RadioGetTracksResponse *_getTracksResponse;
    NSMapTable *_preparedAdSlotByRadioTrack;
    RadioStation *_station;
}

@property (readonly, copy, nonatomic) NSArray *allPreparedAdSlotRadioTracks;
@property (readonly, nonatomic) BOOL shouldIncrementSkipCount;
@property (readonly, nonatomic) NSDate *skipDate;
@property (readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
@property (readonly, copy, nonatomic) NSArray *tracks;

- (void).cxx_destruct;
- (void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2;
- (id)initWithGetTracksResponse:(id)arg1 station:(id)arg2;
- (id)preparedAdSlotForRadioTrack:(id)arg1;

@end


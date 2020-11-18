//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class CLLocation, NSDate;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel
{
    unsigned long long _vista;
    NSDate *_currentDate;
    CLLocation *_currentLocation;
    CLLocation *_anyLocation;
}

@property (readonly, nonatomic) CLLocation *anyLocation; // @synthesize anyLocation=_anyLocation;
@property (readonly, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property (readonly, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property (readonly, nonatomic) unsigned long long vista; // @synthesize vista=_vista;

- (void).cxx_destruct;
- (id)_graphicRectangular;
- (id)initWithVista:(unsigned long long)arg1 entryDate:(id)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 anyLocation:(id)arg5;
- (id)templateForComplicationFamily:(long long)arg1;

@end

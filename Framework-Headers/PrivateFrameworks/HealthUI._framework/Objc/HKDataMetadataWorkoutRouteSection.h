//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKDataMetadataWorkoutRouteCell, HKLocationFetcher, HKLocationReadings, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection
{
    HKDataMetadataWorkoutRouteCell *_cell;
    HKLocationReadings *_locationReadings;
    HKLocationFetcher *_locationFetcher;
    HKRouteMapGenerator *_generator;
}

@property (strong, nonatomic) HKDataMetadataWorkoutRouteCell *cell; // @synthesize cell=_cell;
@property (strong, nonatomic) HKRouteMapGenerator *generator; // @synthesize generator=_generator;
@property (strong, nonatomic) HKLocationFetcher *locationFetcher; // @synthesize locationFetcher=_locationFetcher;
@property (readonly, nonatomic) HKLocationReadings *locationReadings; // @synthesize locationReadings=_locationReadings;

- (void).cxx_destruct;
- (void)_generateRouteImage;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)initWithLocationReadings:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;

@end


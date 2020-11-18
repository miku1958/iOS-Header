//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataViewController.h>

@class HKHealthStore, HKMapRouteTableViewCell, HKWorkoutRoute, NSMutableArray;

@interface HKWorkoutRouteTableViewController : HKDataMetadataViewController
{
    HKHealthStore *_healthStore;
    HKMapRouteTableViewCell *_mapRouteTableViewCell;
    NSMutableArray *_routeData;
}

@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (strong, nonatomic) HKMapRouteTableViewCell *mapRouteTableViewCell; // @synthesize mapRouteTableViewCell=_mapRouteTableViewCell;
@property (strong, nonatomic) NSMutableArray *routeData; // @synthesize routeData=_routeData;
@property (readonly) HKWorkoutRoute *workoutRoute;

- (void).cxx_destruct;
- (id)_convertIndexPathToSuper:(id)arg1;
- (void)addRouteData:(id)arg1 hasFinishedQuery:(BOOL)arg2;
- (id)initWithSample:(id)arg1 delegate:(id)arg2;
- (id)initWithWorkoutRoute:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3;
- (void)loadRoute;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)parseAndDisplayRouteData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

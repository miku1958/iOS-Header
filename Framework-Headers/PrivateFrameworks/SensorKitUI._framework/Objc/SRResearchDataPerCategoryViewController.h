//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SensorKitUI/SRAuthorizationCellDelegate-Protocol.h>
#import <SensorKitUI/SRAuthorizationStoreDelegate-Protocol.h>
#import <SensorKitUI/SRSensorPrunerDelegate-Protocol.h>
#import <SensorKitUI/SRSensorReaderDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString, SRAuthorizationGroup;
@protocol OS_dispatch_group;

@interface SRResearchDataPerCategoryViewController : UITableViewController <SRAuthorizationCellDelegate, SRSensorReaderDelegate, SRSensorPrunerDelegate, SRAuthorizationStoreDelegate>
{
    SRAuthorizationGroup *_authGroup;
    NSMutableSet *_authorizedBundleIds;
    NSArray *_appBundles;
    NSSet *_sensorIdentifiers;
    NSMutableArray *_readers;
    NSMutableArray *_pruners;
    double _start;
    double _end;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSMutableArray *_tombstones;
    long long _numberOfDays;
    CDUnknownBlockType _cancelExportBlock;
}

@property (strong, nonatomic) NSArray *appBundles; // @synthesize appBundles=_appBundles;
@property (strong, nonatomic) SRAuthorizationGroup *authGroup; // @synthesize authGroup=_authGroup;
@property (strong, nonatomic) NSMutableSet *authorizedBundleIds; // @synthesize authorizedBundleIds=_authorizedBundleIds;
@property (copy) CDUnknownBlockType cancelExportBlock; // @synthesize cancelExportBlock=_cancelExportBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double end; // @synthesize end=_end;
@property (nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfDays; // @synthesize numberOfDays=_numberOfDays;
@property (strong, nonatomic) NSMutableArray *pruners; // @synthesize pruners=_pruners;
@property (strong, nonatomic) NSMutableArray *readers; // @synthesize readers=_readers;
@property (strong, nonatomic) NSSet *sensorIdentifiers; // @synthesize sensorIdentifiers=_sensorIdentifiers;
@property (nonatomic) double start; // @synthesize start=_start;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *tombstones; // @synthesize tombstones=_tombstones;

+ (void)initialize;
- (id)bundleForRow:(unsigned long long)arg1;
- (void)cancelExport;
- (void)confirmAuthChangeForBundle:(id)arg1 value:(BOOL)arg2;
- (long long)daysFromDate:(id)arg1 toDate:(id)arg2;
- (void)dealloc;
- (void)deleteAllUnreleasedData;
- (void)exportData;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)populateDays;
- (id)prepareDayCell;
- (id)prepareDeleteCell;
- (id)prepareExportCell;
- (void)presentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2;
- (void)sensorReader:(id)arg1 didCompleteFetch:(id)arg2;
- (BOOL)sensorReader:(id)arg1 fetchingRequest:(id)arg2 didFetchResult:(id)arg3;
- (void)sensorReader:(id)arg1 fetchingRequest:(id)arg2 failedWithError:(id)arg3;
- (void)setValue:(BOOL)arg1 indexPath:(id)arg2;
- (void)showActionSheet;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray, NSMutableSet;

@interface WDDeviceSourcesListTableViewSection : WDSourcesListTableViewSection
{
    NSArray *_list;
    NSArray *_sources;
    NSArray *_devices;
    NSMutableSet *_identifiers;
}

@property (copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property (strong, nonatomic) NSMutableSet *identifiers; // @synthesize identifiers=_identifiers;
@property (copy, nonatomic) NSArray *list; // @synthesize list=_list;
@property (copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;

- (void).cxx_destruct;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (BOOL)_isSourceSelectable:(id)arg1;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (id)_sourceForRow:(long long)arg1;
- (void)applicationWillEnterForeground;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)dataSourceDidUpdate;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)noneString;
- (unsigned long long)numberOfRows;
- (void)reloadDevices;
- (void)setSourceListDataSource:(id)arg1;
- (void)setSources:(id)arg1 devices:(id)arg2;
- (id)titleForFooter;
- (id)titleForHeader;
- (id)willSelectRow:(id)arg1;

@end


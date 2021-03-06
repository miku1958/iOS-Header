//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@class NSArray, NSMutableIndexSet;

@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController
{
    NSArray *_allVolumeRepresentations;
    NSArray *_mountedVolumeIdentifiers;
    NSMutableIndexSet *_selectedVolumesIndexes;
}

- (void).cxx_destruct;
- (BOOL)_canMoveToNextStep;
- (void)_done:(id)arg1;
- (id)defaultRightBarButtonItem;
- (id)initWithVolumes:(id)arg1 mountedVolumeIdentifiers:(id)arg2;
- (void)selectedVolumesIndexesDidChange;
- (void)setupTableViewSections;
- (id)tableCellCheckmarkImageDisabled;
- (void)viewDidLoad;

@end


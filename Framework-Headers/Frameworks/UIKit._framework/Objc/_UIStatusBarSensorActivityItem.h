//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarSensorActivityView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarSensorActivityItem : _UIStatusBarItem
{
    _UIStatusBarSensorActivityView *_sensorActivityIndicator;
}

@property (strong, nonatomic) _UIStatusBarSensorActivityView *sensorActivityIndicator; // @synthesize sensorActivityIndicator=_sensorActivityIndicator;

- (void).cxx_destruct;
- (void)_create_sensorActivityIndicator;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)viewForIdentifier:(id)arg1;

@end

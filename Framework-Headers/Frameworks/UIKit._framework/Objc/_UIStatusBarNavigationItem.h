//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarNavigationItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_nameView;
}

@property (strong, nonatomic) _UIStatusBarStringView *nameView; // @synthesize nameView=_nameView;

- (void).cxx_destruct;
- (void)_create_nameView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (id)viewForIdentifier:(id)arg1;

@end


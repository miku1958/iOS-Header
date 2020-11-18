//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/PSSpecifierGroupController-Protocol.h>

@class NSMutableArray, NSString, PSListController, PSSpecifier;

@interface PSExpandableListGroupController : NSObject <PSSpecifierGroupController>
{
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
    long long _collaspeAfterCount;
    NSMutableArray *_specifiers;
    BOOL _showAll;
    PSSpecifier *_showAllSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_groupIndex;
- (void)addSpecifiers:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 collapseAfterCount:(long long)arg3;
- (void)reloadSpecifier:(id)arg1;
- (void)removeAllSpecifiers;
- (void)showAll;
- (id)showAllSpecifier;
- (id)specifiers;
- (id)spinnerSpecifier;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifierDataSource.h>

#import <PreferencesUI/PSListControllerTestableSpecifiers-Protocol.h>
#import <PreferencesUI/PSTimeRangeCellDelegate-Protocol.h>

@class NSString, PSSpecifier;

@interface PSUIDoNotDisturbDataSource : PSSpecifierDataSource <PSTimeRangeCellDelegate, PSListControllerTestableSpecifiers>
{
    PSSpecifier *_dndRangeSpec;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PSSpecifier *dndRangeSpec; // @synthesize dndRangeSpec=_dndRangeSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)booleanCapabilitiesToTest;
- (void).cxx_destruct;
- (id)_allowedGroupsFooterText;
- (BOOL)_isScheduled;
- (void)_loadBBState;
- (id)allowedDisruptionsGroup:(id)arg1;
- (id)allowedDisruptionsGroupID;
- (void)dealloc;
- (id)doNotDisturb:(id)arg1;
- (id)fromDetailForCell:(id)arg1;
- (void)loadSpecifiers;
- (id)repeatedCallsEnabled;
- (id)scheduledModeEnabled:(id)arg1;
- (void)setDoNotDisturb:(id)arg1 specifier:(id)arg2;
- (void)setIsEffectiveWhileUnlocked:(BOOL)arg1;
- (void)setRepeatedCallsEnabled:(id)arg1;
- (void)setScheduledModeEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;
- (id)toDetailForCell:(id)arg1;

@end


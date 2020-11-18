//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface PTDefaults : BSAbstractDefaultDomain
{
}

@property (nonatomic) BOOL activePrototypingEnabled; // @dynamic activePrototypingEnabled;
@property (nonatomic) BOOL prototypeSettingsEnabled; // @dynamic prototypeSettingsEnabled;
@property (nonatomic) BOOL ringerSwitchShowsUI; // @dynamic ringerSwitchShowsUI;
@property (nonatomic) BOOL shouldClearPrototypeCachesForMigration; // @dynamic shouldClearPrototypeCachesForMigration;
@property (nonatomic) BOOL shouldClearSettingsArchivesForMigration; // @dynamic shouldClearSettingsArchivesForMigration;
@property (strong, nonatomic) NSString *testRecipeDescription; // @dynamic testRecipeDescription;
@property (nonatomic) BOOL testRecipeEatsRingerSwitch; // @dynamic testRecipeEatsRingerSwitch;
@property (nonatomic) BOOL testRecipeEatsVolumeDown; // @dynamic testRecipeEatsVolumeDown;
@property (nonatomic) BOOL testRecipeEatsVolumeUp; // @dynamic testRecipeEatsVolumeUp;
@property (strong, nonatomic) NSString *testRecipeIdentifier; // @dynamic testRecipeIdentifier;
@property (nonatomic) BOOL volumeDownShowsUI; // @dynamic volumeDownShowsUI;
@property (nonatomic) BOOL volumeUpShowsUI; // @dynamic volumeUpShowsUI;

+ (id)sharedInstance;
- (void)_bindAndRegisterDefaults;
- (id)_eventDefaults;
- (BOOL)_eventShowsUI:(long long)arg1;
- (id)_testRecipeDefaults;
- (id)activeTestRecipeDescription;
- (BOOL)activeTestRecipeEatsEvent:(long long)arg1;
- (id)activeTestRecipeEventDescription;
- (id)activeTestRecipeIdentifier;
- (BOOL)canEditShowsUIForEvent:(long long)arg1;
- (void)deactivateTestRecipe;
- (BOOL)displayedShowsUIValueForEvent:(long long)arg1;
- (id)observeEventDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)observeShowUISwitchDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)observeTestRecipeDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)prototypingServerWantsEvent:(long long)arg1;
- (void)setShowsUI:(BOOL)arg1 forEvent:(long long)arg2;
- (BOOL)testRecipeIsActive;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBDailyStatusEvent : PBCodable <NSCopying>
{
    unsigned int _appComplicationSlotsUsed;
    unsigned int _appSessionCount;
    NSString *_automationSuggestionsTrialIdentifier;
    unsigned int _averageShortcutCountPerFolder;
    unsigned int _folderCount;
    NSString *_key;
    unsigned int _numberOfLargeWidgets;
    unsigned int _numberOfMediumWidgets;
    unsigned int _numberOfPersonalAutomationsEnabled;
    unsigned int _numberOfPersonalAutomationsFromSuggestionsEnabled;
    unsigned int _numberOfSmallWidgets;
    unsigned int _numberOfSuggestedAutomationsGenerated;
    unsigned int _numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
    unsigned int _numberOfWidgetsOnHomeScreen;
    unsigned int _numberOfWidgetsOnLoL;
    unsigned int _shortcutComplicationSlotsUsed;
    unsigned int _shortcutRunCount;
    unsigned int _shortcutsCount;
    unsigned int _sleepShortcutsCount;
    unsigned int _uncategorizedShortcutCount;
    unsigned int _watchShortcutCount;
    BOOL _homeAutomationsEnabled;
    BOOL _installed;
    BOOL _personalAutomationsEnabled;
    BOOL _sharingEnabled;
    BOOL _sleepEnabled;
    struct {
        unsigned int appComplicationSlotsUsed:1;
        unsigned int appSessionCount:1;
        unsigned int averageShortcutCountPerFolder:1;
        unsigned int folderCount:1;
        unsigned int numberOfLargeWidgets:1;
        unsigned int numberOfMediumWidgets:1;
        unsigned int numberOfPersonalAutomationsEnabled:1;
        unsigned int numberOfPersonalAutomationsFromSuggestionsEnabled:1;
        unsigned int numberOfSmallWidgets:1;
        unsigned int numberOfSuggestedAutomationsGenerated:1;
        unsigned int numberOfSuggestedAutomationsGeneratedUserAlreadyHas:1;
        unsigned int numberOfWidgetsOnHomeScreen:1;
        unsigned int numberOfWidgetsOnLoL:1;
        unsigned int shortcutComplicationSlotsUsed:1;
        unsigned int shortcutRunCount:1;
        unsigned int shortcutsCount:1;
        unsigned int sleepShortcutsCount:1;
        unsigned int uncategorizedShortcutCount:1;
        unsigned int watchShortcutCount:1;
        unsigned int homeAutomationsEnabled:1;
        unsigned int installed:1;
        unsigned int personalAutomationsEnabled:1;
        unsigned int sharingEnabled:1;
        unsigned int sleepEnabled:1;
    } _has;
}

@property (nonatomic) unsigned int appComplicationSlotsUsed; // @synthesize appComplicationSlotsUsed=_appComplicationSlotsUsed;
@property (nonatomic) unsigned int appSessionCount; // @synthesize appSessionCount=_appSessionCount;
@property (strong, nonatomic) NSString *automationSuggestionsTrialIdentifier; // @synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier;
@property (nonatomic) unsigned int averageShortcutCountPerFolder; // @synthesize averageShortcutCountPerFolder=_averageShortcutCountPerFolder;
@property (nonatomic) unsigned int folderCount; // @synthesize folderCount=_folderCount;
@property (nonatomic) BOOL hasAppComplicationSlotsUsed;
@property (nonatomic) BOOL hasAppSessionCount;
@property (readonly, nonatomic) BOOL hasAutomationSuggestionsTrialIdentifier;
@property (nonatomic) BOOL hasAverageShortcutCountPerFolder;
@property (nonatomic) BOOL hasFolderCount;
@property (nonatomic) BOOL hasHomeAutomationsEnabled;
@property (nonatomic) BOOL hasInstalled;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNumberOfLargeWidgets;
@property (nonatomic) BOOL hasNumberOfMediumWidgets;
@property (nonatomic) BOOL hasNumberOfPersonalAutomationsEnabled;
@property (nonatomic) BOOL hasNumberOfPersonalAutomationsFromSuggestionsEnabled;
@property (nonatomic) BOOL hasNumberOfSmallWidgets;
@property (nonatomic) BOOL hasNumberOfSuggestedAutomationsGenerated;
@property (nonatomic) BOOL hasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas;
@property (nonatomic) BOOL hasNumberOfWidgetsOnHomeScreen;
@property (nonatomic) BOOL hasNumberOfWidgetsOnLoL;
@property (nonatomic) BOOL hasPersonalAutomationsEnabled;
@property (nonatomic) BOOL hasSharingEnabled;
@property (nonatomic) BOOL hasShortcutComplicationSlotsUsed;
@property (nonatomic) BOOL hasShortcutRunCount;
@property (nonatomic) BOOL hasShortcutsCount;
@property (nonatomic) BOOL hasSleepEnabled;
@property (nonatomic) BOOL hasSleepShortcutsCount;
@property (nonatomic) BOOL hasUncategorizedShortcutCount;
@property (nonatomic) BOOL hasWatchShortcutCount;
@property (nonatomic) BOOL homeAutomationsEnabled; // @synthesize homeAutomationsEnabled=_homeAutomationsEnabled;
@property (nonatomic) BOOL installed; // @synthesize installed=_installed;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (nonatomic) unsigned int numberOfLargeWidgets; // @synthesize numberOfLargeWidgets=_numberOfLargeWidgets;
@property (nonatomic) unsigned int numberOfMediumWidgets; // @synthesize numberOfMediumWidgets=_numberOfMediumWidgets;
@property (nonatomic) unsigned int numberOfPersonalAutomationsEnabled; // @synthesize numberOfPersonalAutomationsEnabled=_numberOfPersonalAutomationsEnabled;
@property (nonatomic) unsigned int numberOfPersonalAutomationsFromSuggestionsEnabled; // @synthesize numberOfPersonalAutomationsFromSuggestionsEnabled=_numberOfPersonalAutomationsFromSuggestionsEnabled;
@property (nonatomic) unsigned int numberOfSmallWidgets; // @synthesize numberOfSmallWidgets=_numberOfSmallWidgets;
@property (nonatomic) unsigned int numberOfSuggestedAutomationsGenerated; // @synthesize numberOfSuggestedAutomationsGenerated=_numberOfSuggestedAutomationsGenerated;
@property (nonatomic) unsigned int numberOfSuggestedAutomationsGeneratedUserAlreadyHas; // @synthesize numberOfSuggestedAutomationsGeneratedUserAlreadyHas=_numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
@property (nonatomic) unsigned int numberOfWidgetsOnHomeScreen; // @synthesize numberOfWidgetsOnHomeScreen=_numberOfWidgetsOnHomeScreen;
@property (nonatomic) unsigned int numberOfWidgetsOnLoL; // @synthesize numberOfWidgetsOnLoL=_numberOfWidgetsOnLoL;
@property (nonatomic) BOOL personalAutomationsEnabled; // @synthesize personalAutomationsEnabled=_personalAutomationsEnabled;
@property (nonatomic) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property (nonatomic) unsigned int shortcutComplicationSlotsUsed; // @synthesize shortcutComplicationSlotsUsed=_shortcutComplicationSlotsUsed;
@property (nonatomic) unsigned int shortcutRunCount; // @synthesize shortcutRunCount=_shortcutRunCount;
@property (nonatomic) unsigned int shortcutsCount; // @synthesize shortcutsCount=_shortcutsCount;
@property (nonatomic) BOOL sleepEnabled; // @synthesize sleepEnabled=_sleepEnabled;
@property (nonatomic) unsigned int sleepShortcutsCount; // @synthesize sleepShortcutsCount=_sleepShortcutsCount;
@property (nonatomic) unsigned int uncategorizedShortcutCount; // @synthesize uncategorizedShortcutCount=_uncategorizedShortcutCount;
@property (nonatomic) unsigned int watchShortcutCount; // @synthesize watchShortcutCount=_watchShortcutCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


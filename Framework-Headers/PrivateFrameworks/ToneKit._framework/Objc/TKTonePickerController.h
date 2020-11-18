//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneKit/TLToneStoreDownloadObserver-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, TKTonePickerItem, TLAlert, TLToneManager;
@protocol TKTonePickerControllerDelegate, TLToneStoreDownloadController;

@interface TKTonePickerController : NSObject <TLToneStoreDownloadObserver>
{
    TLToneManager *_toneManager;
    unsigned long long _toneTypes;
    BOOL _defaultToneIdentifierWasExplicitlySet;
    BOOL _selectedToneWasExplicitlySetToDefaultTone;
    BOOL _selectedVibrationIdentifierWasExplicitlySet;
    BOOL _showsNoneWasExplicitlySet;
    BOOL _isToneStoreDownloadButtonAllowed;
    long long _toneStoreDownloadButtonState;
    NSMutableDictionary *_activeToneStoreDownloadsByIdentifier;
    NSMutableDictionary *_finishedToneStoreDownloadsByIdentifier;
    BOOL _shouldFreezeContentsOriginatingFromToneManager;
    BOOL _hasLoadedTonesOnce;
    NSMutableArray *_cachedPickerSectionItems;
    NSMutableArray *_cachedPickerRowItems;
    NSMutableArray *_cachedClassicRingtonePickerItems;
    NSMutableArray *_cachedClassicAlertTonePickerItems;
    NSArray *_installedTones;
    NSMutableArray *_toneGroupLists;
    NSMutableArray *_toneGroupNames;
    NSMutableArray *_toneGroupBucketIdentifiers;
    TLAlert *_playingAlert;
    BOOL _showsDefault;
    BOOL _showsNone;
    BOOL _noneAtTop;
    BOOL _showsNothingSelected;
    BOOL _showsToneStore;
    BOOL _mediaAtTop;
    BOOL _showsVibrations;
    BOOL _showsIgnoreMute;
    BOOL _ignoreMute;
    BOOL __behavesAsRingtonePicker;
    id<TKTonePickerControllerDelegate> _delegate;
    long long _alertType;
    NSString *_topic;
    NSString *_defaultToneIdentifier;
    NSString *_noneString;
    NSString *_selectedVibrationIdentifier;
    id<TLToneStoreDownloadController> _toneStoreDownloadController;
    NSArray *__classicRingtoneIdentifiers;
    NSArray *__classicAlertToneIdentifiers;
    unsigned long long __selectedClassicRingtoneIndex;
    unsigned long long __selectedClassicAlertToneIndex;
    NSIndexPath *__selectedToneIndexPath;
}

@property (readonly, nonatomic) NSString *_alertTonesPlistName;
@property (nonatomic, setter=_setBehavesAsRingtonePicker:) BOOL _behavesAsRingtonePicker; // @synthesize _behavesAsRingtonePicker=__behavesAsRingtonePicker;
@property (strong, nonatomic, setter=_setClassicAlertToneIdentifiers:) NSArray *_classicAlertToneIdentifiers; // @synthesize _classicAlertToneIdentifiers=__classicAlertToneIdentifiers;
@property (strong, nonatomic, setter=_setClassicRingtoneIdentifiers:) NSArray *_classicRingtoneIdentifiers; // @synthesize _classicRingtoneIdentifiers=__classicRingtoneIdentifiers;
@property (readonly, nonatomic) NSIndexPath *_indexPathForDefaultGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForFirstToneGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForMediaGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForNone;
@property (readonly, nonatomic) NSIndexPath *_indexPathForToneStoreGroup;
@property (readonly, nonatomic) NSIndexPath *_indexPathForVibrationGroup;
@property (readonly, nonatomic) NSString *_ringtonesPlistName;
@property (nonatomic, setter=_setSelectedClassicAlertToneIndex:) unsigned long long _selectedClassicAlertToneIndex; // @synthesize _selectedClassicAlertToneIndex=__selectedClassicAlertToneIndex;
@property (nonatomic, setter=_setSelectedClassicRingtoneIndex:) unsigned long long _selectedClassicRingtoneIndex; // @synthesize _selectedClassicRingtoneIndex=__selectedClassicRingtoneIndex;
@property (strong, nonatomic, setter=_setSelectedToneIndexPath:) NSIndexPath *_selectedToneIndexPath; // @synthesize _selectedToneIndexPath=__selectedToneIndexPath;
@property (strong, nonatomic, setter=_setToneManager:) TLToneManager *_toneManager;
@property (readonly, nonatomic) TKTonePickerItem *_topLevelSelectedTonePickerItem;
@property (readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property (readonly, nonatomic) BOOL canShowStore;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultToneIdentifier; // @synthesize defaultToneIdentifier=_defaultToneIdentifier;
@property (weak, nonatomic) id<TKTonePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreMute; // @synthesize ignoreMute=_ignoreMute;
@property (readonly, nonatomic) NSIndexPath *indexPathForSelectedTone;
@property (nonatomic, getter=isMediaAtTop) BOOL mediaAtTop; // @synthesize mediaAtTop=_mediaAtTop;
@property (nonatomic, getter=isNoneAtTop) BOOL noneAtTop; // @synthesize noneAtTop=_noneAtTop;
@property (copy, nonatomic) NSString *noneString; // @synthesize noneString=_noneString;
@property (copy, nonatomic) NSString *selectedToneIdentifier;
@property (readonly, nonatomic) TKTonePickerItem *selectedTonePickerItem;
@property (copy, nonatomic) NSString *selectedVibrationIdentifier; // @synthesize selectedVibrationIdentifier=_selectedVibrationIdentifier;
@property (nonatomic) BOOL showsDefault; // @synthesize showsDefault=_showsDefault;
@property (nonatomic) BOOL showsIgnoreMute; // @synthesize showsIgnoreMute=_showsIgnoreMute;
@property (nonatomic) BOOL showsNone; // @synthesize showsNone=_showsNone;
@property (nonatomic) BOOL showsNothingSelected; // @synthesize showsNothingSelected=_showsNothingSelected;
@property (nonatomic) BOOL showsToneStore; // @synthesize showsToneStore=_showsToneStore;
@property (nonatomic) BOOL showsVibrations; // @synthesize showsVibrations=_showsVibrations;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<TLToneStoreDownloadController> toneStoreDownloadController; // @synthesize toneStoreDownloadController=_toneStoreDownloadController;
@property (copy, nonatomic) NSString *topic; // @synthesize topic=_topic;

+ (id)_latestRedownloadAllTonesDate;
+ (void)_updateLatestRedownloadAllTonesDate;
- (void).cxx_destruct;
- (id)_annotatedNameForToneIdentifier:(id)arg1;
- (void)_cachePickerRowItem:(id)arg1 atIndex:(long long)arg2 inSectionForItem:(id)arg3;
- (void)_cachePickerSectionItem:(id)arg1 forSection:(long long)arg2;
- (void)_cacheToneClassicsPickerItem:(id)arg1 forIndex:(long long)arg2 headerKind:(unsigned long long)arg3;
- (id)_cachedPickerItemForSection:(long long)arg1;
- (id)_cachedPickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (id)_cachedToneClassicsPickerItemForIndex:(long long)arg1 headerKind:(unsigned long long)arg2;
- (void)_didFinishPlayingAlert:(id)arg1;
- (void)_didReloadTones;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (BOOL)_didSelectToneClassicsPickerItem:(id)arg1;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (void)_didUpdateCheckedStatus:(BOOL)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didUpdateCheckedStatus:(BOOL)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)_didUpdateDetailText:(id)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didUpdateFooterTextForToneStoreGroup;
- (void)_didUpdateToneStoreDownloadItem;
- (void)_disableToneStoreDownloadItem;
- (BOOL)_enableToneStoreDownloadItemIfAppropriate;
- (id)_footerTextForToneStoreGroup;
- (void)_goToStore;
- (id)_identifierAtIndexPath:(id)arg1 isMediaItem:(BOOL *)arg2;
- (id)_identifierOfMediaItemAtIndex:(unsigned long long)arg1;
- (id)_identifierOfSelectedClassicAlertTone;
- (id)_identifierOfSelectedClassicRingtone;
- (id)_identifierOfToneAtIndexPath:(id)arg1;
- (unsigned long long)_indexOfMediaItemWithIdentifier:(id)arg1;
- (id)_indexPathForIgnoreMuteGroup;
- (id)_indexPathForToneStoreDownloadItem;
- (id)_indexPathForToneWithIdentifier:(id)arg1;
- (void)_invalidatePickerItemCaches;
- (BOOL)_isDefaultGroupAtIndexPath:(id)arg1;
- (BOOL)_isDividerAtIndexPath:(id)arg1;
- (BOOL)_isIgnoreMuteGroupAtIndexPath:(id)arg1;
- (BOOL)_isMediaAtTop;
- (BOOL)_isMediaGroupAtIndexPath:(id)arg1;
- (BOOL)_isNoneGroupAtIndexPath:(id)arg1;
- (BOOL)_isToneStoreGroupAtIndexPath:(id)arg1;
- (BOOL)_isVibrationGroupAtIndexPath:(id)arg1;
- (id)_loadAlertTonesFromPlist;
- (id)_loadRingtonesFromPlist;
- (id)_loadTonesFromPlistNamed:(id)arg1;
- (unsigned long long)_mediaItemsCount;
- (id)_nameForToneIdentifier:(id)arg1;
- (id)_nameOfSelectedVibrationIdentifier;
- (id)_pickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (void)_playToneWithIdentifier:(id)arg1;
- (void)_redownloadAllTones;
- (void)_registerForUserGeneratedVibrationsDidChangeNotification;
- (void)_reloadMediaItems;
- (void)_reloadStateForBasicBehavior;
- (void)_reloadTones;
- (void)_reloadTonesForExternalChange:(BOOL)arg1 shouldSkipDelegateFullReload:(BOOL)arg2;
- (void)_resetSelectedClassicAlertToneIndex;
- (void)_resetSelectedClassicRingtoneIndex;
- (void)_resetSelectedVibrationIdentifierForcingUpdatingVibrationName:(BOOL)arg1;
- (id)_sanitizedSelectedVibrationIdentifierAllowingNilForDefault:(BOOL)arg1;
- (id)_selectedIdentifier:(BOOL *)arg1;
- (void)_setSelectedToneIdentifier:(id)arg1 currentlyReloadingTones:(BOOL)arg2;
- (void)_setSelectedVibrationIdentifier:(id)arg1 explicitlySet:(BOOL)arg2;
- (void)_setSelectedVibrationIdentifier:(id)arg1 forceUpdatingVibrationName:(BOOL)arg2 explicitlySet:(BOOL)arg3;
- (BOOL)_showsMedia;
- (void)_sortToneIdentifiersArray:(id)arg1;
- (void)_togglePlayForToneWithIdentifier:(id)arg1;
- (id)_toneClassicsPickerItemAtIndex:(long long)arg1 belowTonePickerItem:(id)arg2;
- (void)_toneManagerContentsChanged:(id)arg1;
- (void)_uncachePickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (void)_unregisterForUserGeneratedVibrationsDidChangeNotification;
- (void)_updateDetailTextOfVibrationItem;
- (void)dealloc;
- (void)didFinishCheckingForAvailableToneStoreDownloads:(BOOL)arg1;
- (BOOL)didSelectTonePickerItem:(id)arg1;
- (void)finishedWithPicker;
- (id)initWithAlertType:(long long)arg1;
- (long long)numberOfSections;
- (id)pickerItemForSection:(long long)arg1;
- (void)stopPlayingWithFadeOut:(BOOL)arg1;
- (void)storeAccountNameDidChange:(id)arg1;
- (void)toneStoreDownloadsDidFinish:(id)arg1;
- (void)toneStoreDownloadsDidProgress:(id)arg1;
- (void)toneStoreDownloadsDidStart:(id)arg1;

@end


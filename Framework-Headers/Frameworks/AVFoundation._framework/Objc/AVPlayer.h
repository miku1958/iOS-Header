//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerInternal, NSArray, NSError, NSString;

@interface AVPlayer : NSObject
{
    AVPlayerInternal *_player;
}

@property (readonly, nonatomic, getter=_isPIPModePossible) BOOL PIPModePossible;
@property (copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;
@property (readonly, nonatomic) long long _externalProtectionStatus;
@property (nonatomic) BOOL allowsOutOfBandTextTrackRendering;
@property (nonatomic) BOOL allowsPixelBufferPoolSharing;
@property (nonatomic) BOOL appliesMediaSelectionCriteriaAutomatically;
@property (copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property (readonly, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;
@property (readonly, nonatomic, getter=_cachedValueForPIPModePossible) BOOL cachedValueForPIPModePossible;
@property (nonatomic) BOOL disallowsAMRAudio;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) float maxRateForAudioPlayback;
@property (nonatomic) float minRateForAudioPlayback;
@property (copy, nonatomic) NSString *multichannelAudioStrategy;
@property (readonly, nonatomic) long long status;

+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfUserVolume;
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (BOOL)automaticallyNotifiesObserversOfVibrationPattern;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
- (BOOL)_CALayerDestinationIsTVOut;
- (long long)_actionAtItemEnd;
- (void)_addFPListeners;
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)arg1 afterItem:(id)arg2;
- (void)_addLayer:(id)arg1 withPixelBufferAttributes:(id)arg2;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_advanceToNextItem;
- (BOOL)_airPlayVideoActive;
- (BOOL)_allowsExternalPlayback;
- (BOOL)_allowsPixelBufferPoolSharing;
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (BOOL)_appliesMediaSelectionCriteriaAutomatically;
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(CDUnknownBlockType)arg1;
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_attachVideoLayersToFigPlayer;
- (id)_audioOutputDeviceUniqueID;
- (id)_avPlayerLayers;
- (BOOL)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
- (struct CGSize)_cachedPresentationSizeOfCurrentItem;
- (id)_cachedValueForKey:(id)arg1;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_carplayIsActive;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (id)_clientName;
- (long long)_clientPriority;
- (id)_closedCaptionLayers;
- (struct OpaqueFigPlayer *)_copyFigPlayer;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_createAndConfigureFigPlayerWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)_createPrerollID;
- (long long)_defaultActionAtItemEnd;
- (void)_detachClosedCaptionLayersFromFigPlayer;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachVideoLayersFromFigPlayer;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_didFinishSuspension:(id)arg1;
- (BOOL)_disallowsAMRAudio;
- (BOOL)_disallowsHardwareAcceleratedVideoDecoder;
- (BOOL)_dynamicallyChoosesInitialVariant;
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)arg1;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_externalPlaybackActive;
- (long long)_extractVerifiedFPExternalProtectionStatus:(id)arg1;
- (id)_fpNotificationNames;
- (void)_grabPropertiesFromNewCurrentItem;
- (BOOL)_hasAssociatedAVPlayerLayerInPIPMode;
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;
- (void)_insertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)_isChangingValueForKey:(id)arg1;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (BOOL)_isDisplayingClosedCaptions;
- (BOOL)_isIAPDExtendedModeActive;
- (BOOL)_isMuted;
- (void)_itemIsReadyToPlay:(id)arg1;
- (long long)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (id)_items;
- (id)_items_invokeOnIvarAccessQueue;
- (BOOL)_limitsBandwidthForCellularAccess;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (struct CGSize)_maximumAVPlayerLayerDisplaySize;
- (id)_multichannelAudioStrategy;
- (void)_noteDisplaySize:(struct CGSize)arg1 forPlayerLayer:(id)arg2;
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)arg1;
- (void)_noteNewPresentationSizeForPlayerItem:(id)arg1;
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;
- (id)_pendingFigPlayerProperties;
- (id)_pendingFigPlayerPropertyForKey:(id)arg1;
- (id)_pixelBufferAttributeMediator;
- (id)_playbackDisplaysForFigPlayer;
- (void)_playerLayer:(id)arg1 replaceVideoLayer:(id)arg2 with:(id)arg3;
- (float)_playerVolume;
- (id)_propertyStorage;
- (float)_rate;
- (void)_removeAllItems;
- (void)_removeAllLayers;
- (void)_removeFPListeners;
- (void)_removeItem:(id)arg1;
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (BOOL)_resumePlayback:(double)arg1 error:(id *)arg2;
- (void)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(CDUnknownBlockType)arg1 modificationBlock:(CDUnknownBlockType)arg2;
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(BOOL)arg2;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)_setClientName:(id)arg1;
- (void)_setClientPriority:(long long)arg1;
- (void)_setCurrentItem:(id)arg1;
- (void)_setDynamicallyChoosesInitialVariant:(BOOL)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_setLimitsBandwidthForCellularAccess:(BOOL)arg1;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_setPendingFigPlayerProperty:(id)arg1 forKey:(id)arg2;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (BOOL)_shouldDetachVideoLayersFromFigPlayer;
- (BOOL)_shouldLogPerformanceData;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_stateDispatchQueue;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_subtitleLayers;
- (CDUnknownBlockType)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (void)_updateClosedCaptionLayerBounds:(id)arg1;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer *)arg2;
- (void)_updateProxyTimebaseFromNewCurrentItem;
- (float)_userVolume;
- (BOOL)_usesAudioOnlyModeForExternalPlayback;
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;
- (id)_videoLayers;
- (id)_weakReference;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (long long)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)allowsAirPlayVideo;
- (BOOL)allowsExternalPlayback;
- (BOOL)autoSwitchStreamVariants;
- (void)cancelPendingPrerolls;
- (id)currentItem;
- (CDStruct_1b6d18a9)currentTime;
- (void)dealloc;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)disallowsHardwareAcceleratedVideoDecoder;
- (id)dispatchQueue;
- (id)expectedAssetTypes;
- (long long)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (void)finalize;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isAirPlayVideoActive;
- (BOOL)isClosedCaptionDisplayEnabled;
- (BOOL)isDisplayingClosedCaptions;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isMuted;
- (BOOL)isPIPModePossible;
- (struct OpaqueCMClock *)masterClock;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (id)outputContext;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)pause;
- (void)play;
- (id)playerAVAudioSession;
- (void)prepareItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)preparesItemsForPlaybackAsynchronously;
- (void)prerollAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prerollOperationDidComplete:(BOOL)arg1 notificationPayload:(struct __CFDictionary *)arg2;
- (float)rate;
- (void)removeAudioPlaybackRateLimits;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)seekToDate:(id)arg1;
- (void)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setAllowsAirPlayVideo:(BOOL)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setAutoSwitchStreamVariants:(BOOL)arg1;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)arg1;
- (void)setExpectedAssetTypes:(id)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)setMuted:(BOOL)arg1;
- (void)setOutputContext:(id)arg1;
- (void)setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2;
- (void)setShouldReduceResourceUsage:(BOOL)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVibrationPattern:(id)arg1;
- (void)setVolume:(float)arg1;
- (BOOL)shouldReduceResourceUsage;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (id)valueForUndefinedKey:(id)arg1;
- (id)vibrationPattern;
- (float)volume;
- (void)willChangeValueForKey:(id)arg1;

@end


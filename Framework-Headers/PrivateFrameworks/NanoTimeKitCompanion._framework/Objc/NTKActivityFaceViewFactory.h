//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKComplicationTimelineDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationFactoryDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKWellnessTimelineModelSubscriber-Protocol.h>

@class NSDate, NSString, NTKActivityFaceTimeline, NTKUtilityComplicationFactory, NTKWellnessEntryModel;
@protocol NTKActivityFaceViewFactoryDelegate, OS_dispatch_source;

@interface NTKActivityFaceViewFactory : NSObject <NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber, NTKComplicationTimelineDelegate>
{
    BOOL _wantsUpdateNowEntryModelNextLive;
    BOOL _timeTravellingOutsideBounds;
    double _lastWristRaiseTime;
    double _wristRaiseTimoutDuration;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    BOOL _hasBeenLiveOrOnDeck;
    BOOL _isHistoricalDataLoaded;
    BOOL _isLoadingData;
    BOOL _showsCanonicalContent;
    BOOL _showsLockedContent;
    NTKUtilityComplicationFactory *_complicationFactory;
    NTKActivityFaceTimeline *_timeline;
    NSDate *_timeTravelDate;
    id<NTKActivityFaceViewFactoryDelegate> _delegate;
    long long _dataMode;
}

@property (strong, nonatomic) NTKUtilityComplicationFactory *complicationFactory; // @synthesize complicationFactory=_complicationFactory;
@property (readonly, nonatomic) NTKWellnessEntryModel *currentEntryModel;
@property (nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKActivityFaceViewFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBeenLiveOrOnDeck; // @synthesize hasBeenLiveOrOnDeck=_hasBeenLiveOrOnDeck;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isHistoricalDataLoaded; // @synthesize isHistoricalDataLoaded=_isHistoricalDataLoaded;
@property (nonatomic) BOOL isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property (nonatomic) BOOL showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property (nonatomic) BOOL showsLockedContent; // @synthesize showsLockedContent=_showsLockedContent;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property (strong, nonatomic) NTKActivityFaceTimeline *timeline; // @synthesize timeline=_timeline;

+ (void)_purgeGLContexts;
+ (id)prelaunchApplicationIdentifiers;
+ (void)prewarm;
+ (BOOL)userActiveEnergyIsCalories;
+ (id)userActiveEnergyUnit;
- (void).cxx_destruct;
- (id)_canonicalEntryModel;
- (id)_colorComplicationSlots;
- (id)_complicationSlots;
- (void)_configureComplicationFactory:(id)arg1;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (void)_extendRightWithEntryModel:(id)arg1;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_handleActiveEnergyUnitChange;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (void)_loadCurrentEntry;
- (void)_loadCurrentEntryForce:(BOOL)arg1;
- (void)_nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_resetWristRaiseAnimationTimeout;
- (void)_startExtendOperationIfNecessaryForWindow:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3;
- (void)_updateDimStateForCurrentTimeline;
- (void)_updateRingsForCurrentEntryModel;
- (void)_updateRingsForCurrentEntryModelAnimated:(BOOL)arg1;
- (void)_updateTimeTravelBoundaries;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)dealloc;
- (id)debugStringForEntry:(id)arg1;
- (void)endScrubbing;
- (void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3;
- (double)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2;
- (unsigned long long)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2;
- (long long)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(unsigned long long)arg2 slot:(id)arg3;
- (id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(long long)arg3 slot:(id)arg4;
- (id)init;
- (void)launchActivityApp;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)scrubToDate:(id)arg1;
- (BOOL)shouldPerformFromZeroWristRaise;
- (void)startScrubbing;
- (void)timeTravelEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1;
- (void)wellnessTimelineModelHistorcalDataLoaded:(BOOL)arg1;

@end


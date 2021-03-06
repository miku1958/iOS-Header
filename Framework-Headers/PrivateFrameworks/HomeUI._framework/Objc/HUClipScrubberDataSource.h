//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>
#import <HomeUI/UICollectionViewDataSource-Protocol.h>

@class HFCameraPlaybackEngine, HUClipScrubberSelectionView, HUClipScrubberTimeController, NSArray, NSDate, NSMutableArray, NSString, UICollectionView;
@protocol HFCameraRecordingEvent;

@interface HUClipScrubberDataSource : NSObject <HFCameraPlaybackEngineObserver, UICollectionViewDataSource>
{
    BOOL _editing;
    BOOL _selectionViewHidden;
    NSArray *_events;
    HUClipScrubberTimeController *_timeController;
    id<HFCameraRecordingEvent> _currentEvent;
    UICollectionView *_clipCollectionView;
    unsigned long long _currentTimelineState;
    unsigned long long _displayMode;
    NSDate *_currentDate;
    HFCameraPlaybackEngine *_playbackEngine;
    unsigned long long _mostRecentClipIndex;
    long long _lastSelectedClipIndex;
    double _posterFrameWidth;
    double _startingPinchDeltaX;
    HUClipScrubberSelectionView *_selectionView;
    double _lastGestureScale;
    NSMutableArray *_clipEvents;
}

@property (weak, nonatomic) UICollectionView *clipCollectionView; // @synthesize clipCollectionView=_clipCollectionView;
@property (strong, nonatomic) NSMutableArray *clipEvents; // @synthesize clipEvents=_clipEvents;
@property (strong, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property (weak, nonatomic) id<HFCameraRecordingEvent> currentEvent; // @synthesize currentEvent=_currentEvent;
@property (readonly, nonatomic) NSArray *currentEvents;
@property (nonatomic) unsigned long long currentTimelineState; // @synthesize currentTimelineState=_currentTimelineState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (readonly, nonatomic) NSArray *events; // @synthesize events=_events;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastGestureScale; // @synthesize lastGestureScale=_lastGestureScale;
@property (nonatomic) long long lastSelectedClipIndex; // @synthesize lastSelectedClipIndex=_lastSelectedClipIndex;
@property (readonly, nonatomic) unsigned long long mostRecentClipIndex; // @synthesize mostRecentClipIndex=_mostRecentClipIndex;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (nonatomic) double posterFrameWidth; // @synthesize posterFrameWidth=_posterFrameWidth;
@property (strong, nonatomic) HUClipScrubberSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property (nonatomic) BOOL selectionViewHidden; // @synthesize selectionViewHidden=_selectionViewHidden;
@property (nonatomic) double startingPinchDeltaX; // @synthesize startingPinchDeltaX=_startingPinchDeltaX;
@property (readonly) Class superclass;
@property (strong, nonatomic) HUClipScrubberTimeController *timeController; // @synthesize timeController=_timeController;

- (void).cxx_destruct;
- (BOOL)_doesReachabilitySectionPrecedeSection:(unsigned long long)arg1;
- (id)_indexPathsForClip:(id)arg1;
- (BOOL)_isZoomingIn:(double)arg1;
- (id)_reachabilitySectionCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;
- (id)_recordingSectionCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;
- (id)_spacerCellForCollectionView:(id)arg1 forEvent:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateClipCollectionView;
- (void)beginTimeScaleTrackingForPinchGesture:(id)arg1;
- (void)changeTimeScaleForPinchGesture:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)eventForSection:(unsigned long long)arg1;
- (id)indexPathForEvent:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (BOOL)isSpacerAtIndexPath:(id)arg1;
- (BOOL)isValidEventAtIndexPath:(id)arg1;
- (BOOL)isValidRecordingEventAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)offsetForEvent:(id)arg1;
- (void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
- (id)previousEventForSection:(unsigned long long)arg1;
- (void)reloadClipEvents;
- (void)reloadEvents:(id)arg1;
- (double)scrubbingResolutionForClip:(id)arg1;
- (id)selectedDateFromCell:(id)arg1 atCurrentOffset:(double)arg2;
- (id)selectedDateFromCell:(id)arg1 atOffset:(double)arg2;
- (id)startDateFromCell:(id)arg1;
- (void)toggleSelectionStateForItemAtIndexPath:(id)arg1;
- (void)updateMostRecentClipIndex;
- (void)updateSelectionViewIfNeeded;
- (void)updateToClipAtIndexPath:(id)arg1;

@end


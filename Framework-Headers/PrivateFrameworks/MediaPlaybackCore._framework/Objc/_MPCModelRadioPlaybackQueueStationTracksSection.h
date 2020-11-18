//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/_MPCModelRadioPlaybackQueueSection-Protocol.h>

@class ICMutableRadioPlaybackHistory, MPCPlaybackRequestEnvironment, MPPropertySet, MPSectionedCollection, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface _MPCModelRadioPlaybackQueueStationTracksSection : NSObject <_MPCModelRadioPlaybackQueueSection>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    BOOL _isSiriInitiated;
    MPPropertySet *_itemProperties;
    ICMutableRadioPlaybackHistory *_playbackHistory;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPSectionedCollection *_trackModels;
    MPSectionedCollection *_tracks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) ICMutableRadioPlaybackHistory *playbackHistory;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) MPSectionedCollection *trackModels; // @synthesize trackModels=_trackModels;
@property (readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;

- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (id)initWithPlaybackContext:(id)arg1;
- (BOOL)isExplicitItemAtIndex:(long long)arg1;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)arg1;
- (void)updateWithPersonalizedResponse:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICMutableRadioPlaybackHistory, MPCModelGenericAVItemUserIdentityPropertySet, MPCPlaybackRequestEnvironment, MPPropertySet, MPSectionedCollection, NSHashTable;
@protocol OS_dispatch_queue;

@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    BOOL _isSiriInitiated;
    MPPropertySet *_itemProperties;
    ICMutableRadioPlaybackHistory *_playbackHistory;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPSectionedCollection *_trackModels;
    MPSectionedCollection *_tracks;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
}

@property (strong, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet; // @synthesize identityPropertySet=_identityPropertySet;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) ICMutableRadioPlaybackHistory *playbackHistory;
@property (readonly, copy, nonatomic) MPSectionedCollection *trackModels; // @synthesize trackModels=_trackModels;
@property (readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;

- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)initWithPlaybackContext:(id)arg1;
- (BOOL)isExplicitItemAtIndex:(long long)arg1;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)arg1;
- (void)updateWithPersonalizedResponse:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerInsertItemsCommand-Protocol.h>

@class NSArray, NSSet, NSString;

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand <MPCPlayerInsertItemsCommand>
{
    BOOL _supportsCreateStation;
    NSArray *_devices;
    NSSet *_supportedInsertionPositions;
    NSSet *_supportedQueueTypes;
    NSSet *_supportedCustomDataQueueIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // @synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers;
@property (strong, nonatomic) NSSet *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
@property (strong, nonatomic) NSSet *supportedQueueTypes; // @synthesize supportedQueueTypes=_supportedQueueTypes;
@property (nonatomic) BOOL supportsCreateStation; // @synthesize supportsCreateStation=_supportsCreateStation;

- (void).cxx_destruct;
- (id)_createRadioStationCommandRequest;
- (id)_insertWithOptions:(id)arg1;
- (BOOL)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(BOOL)arg2 atInsertionPosition:(int)arg3;
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1;
- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1;
- (id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2;

@end


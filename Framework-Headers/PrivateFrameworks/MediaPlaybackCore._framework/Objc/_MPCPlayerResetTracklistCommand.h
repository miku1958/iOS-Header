//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerResetTracklistCommand-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface _MPCPlayerResetTracklistCommand : _MPCPlayerCommand <MPCPlayerResetTracklistCommand>
{
    BOOL _supportsSetQueueCommand;
    NSDictionary *_supportedSpecializedQueues;
    NSSet *_supportedQueueTypes;
    NSSet *_supportedCustomDataQueueIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *specializedIntents;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // @synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers;
@property (strong, nonatomic) NSSet *supportedQueueTypes; // @synthesize supportedQueueTypes=_supportedQueueTypes;
@property (strong, nonatomic) NSDictionary *supportedSpecializedQueues; // @synthesize supportedSpecializedQueues=_supportedSpecializedQueues;
@property (nonatomic) BOOL supportsSetQueueCommand; // @synthesize supportsSetQueueCommand=_supportsSetQueueCommand;

- (void).cxx_destruct;
- (id)clear;
- (id)replaceWithPlaybackIntent:(id)arg1;
- (id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;

@end


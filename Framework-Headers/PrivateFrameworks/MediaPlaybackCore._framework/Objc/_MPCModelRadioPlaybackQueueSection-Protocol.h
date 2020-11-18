//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class ICRadioStationTrack, MPAVItem;
@protocol MPAVItemQueueIdentifier;

@protocol _MPCModelRadioPlaybackQueueSection <NSObject>

@property (readonly, nonatomic) long long numberOfItems;

- (MPAVItem *)AVItemAtIndex:(long long)arg1;
- (id<MPAVItemQueueIdentifier>)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (BOOL)isExplicitItemAtIndex:(long long)arg1;
- (long long)removeExplicitItems;
- (ICRadioStationTrack *)trackForItemAtIndex:(long long)arg1;
@end

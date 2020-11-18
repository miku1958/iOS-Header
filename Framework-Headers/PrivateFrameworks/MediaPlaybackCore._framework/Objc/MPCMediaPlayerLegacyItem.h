//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerItem.h>

@class MPAVItem;

@interface MPCMediaPlayerLegacyItem : MPCPlayerItem
{
    CDStruct_45e4ec31 _snapshot;
    MPAVItem *_avItem;
}

@property (readonly, nonatomic) MPAVItem *avItem; // @synthesize avItem=_avItem;

- (void).cxx_destruct;
- (void)_artworkDidChangeNotification:(id)arg1;
- (void)_durationAvailablityDidChangeNotification:(id)arg1;
- (void)_explicitDidChangeNotification:(id)arg1;
- (void)_modelGenericObjectDidChangeNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_titlesDidChangeNotification:(id)arg1;
- (void)_updateSnapshot;
- (id)albumName;
- (id)artistName;
- (id)artworkCatalog;
- (id)composerName;
- (void)dealloc;
- (CDStruct_45e4ec31)durationSnapshot;
- (id)initWithAVItem:(id)arg1;
- (BOOL)isExplicit;
- (id)modelGenericObjectRepresentation;
- (id)title;

@end


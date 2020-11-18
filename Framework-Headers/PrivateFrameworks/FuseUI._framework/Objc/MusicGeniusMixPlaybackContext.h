//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicQueryPlaybackContext.h>

#import <FuseUI/MusicGeniusMixQueueFeederDataSource-Protocol.h>

@class MPMediaItem, MPMediaPlaylist, NSMutableArray, NSString;

@interface MusicGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource>
{
    NSMutableArray *_indexedSubQueries;
    BOOL _finite;
    MPMediaPlaylist *_mixPlaylist;
    MPMediaItem *_requiredInitialMediaItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MPMediaPlaylist *mixPlaylist; // @synthesize mixPlaylist=_mixPlaylist;
@property (strong, nonatomic) MPMediaItem *requiredInitialMediaItem; // @synthesize requiredInitialMediaItem=_requiredInitialMediaItem;
@property (readonly) Class superclass;

+ (Class)queueFeederClass;
- (void).cxx_destruct;
- (void)_enumerateItemsBySubQueryUsingBlock:(CDUnknownBlockType)arg1;
- (id)_generateNewItemsQuery:(id *)arg1 index:(unsigned long long)arg2;
- (unsigned long long)_indexOfSubQueryWithSubQueryIndex:(unsigned long long)arg1 searchOptions:(unsigned long long)arg2;
- (id)_queryForMediaItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id *)arg3;
- (id)query;

@end

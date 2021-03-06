//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class MPMediaItem, MPMediaItemCollection, MPMediaQuery;

@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor
{
    MPMediaQuery *_query;
    MPMediaItemCollection *_itemCollection;
    MPMediaItem *_startItem;
}

@property (readonly, nonatomic) MPMediaItemCollection *itemCollection;
@property (readonly, copy, nonatomic) MPMediaQuery *query;
@property (strong, nonatomic) MPMediaItem *startItem; // @synthesize startItem=_startItem;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemCollection:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)setEndTime:(double)arg1 forItem:(id)arg2;
- (void)setStartTime:(double)arg1 forItem:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelPodcastAuthor, NSString, NSURL;

@interface MPModelPodcast : MPModelObject
{
}

@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property (strong, nonatomic) MPModelPodcastAuthor *author; // @dynamic author;
@property (copy, nonatomic) NSURL *feedURL; // @dynamic feedURL;
@property (copy, nonatomic) NSURL *shareURL; // @dynamic shareURL;
@property (nonatomic) BOOL supportsSubscription; // @dynamic supportsSubscription;
@property (copy, nonatomic) NSString *title; // @dynamic title;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__author_KEY;
+ (id)__feedURL_KEY;
+ (id)__shareURL_KEY;
+ (id)__supportsSubscription_KEY;
+ (id)__title_KEY;
+ (id)kindWithEpisodeKind:(id)arg1;
- (id)artworkCatalog;
- (id)humanDescription;

@end


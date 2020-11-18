//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/MSVSegmentedCodingPackage.h>

@class MPNowPlayingContentItem, NSDate, NSString, UIImage;

@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage
{
    MPNowPlayingContentItem *_contentItem;
    UIImage *_artworkImage;
    NSString *_identifier;
    NSDate *_lastModifiedDate;
}

@property (copy, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property (copy, nonatomic) MPNowPlayingContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;

+ (id)packageTypeIdentifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)saveWithError:(id *)arg1;
- (BOOL)writeWithError:(id *)arg1;

@end

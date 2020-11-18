//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork
{
    NSData *_imageData;
    NSString *_mimeType;
}

@property (readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property (readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;

- (void).cxx_destruct;
- (id)copyImageData;
- (id)description;
- (BOOL)hasArtworkData;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)type;

@end


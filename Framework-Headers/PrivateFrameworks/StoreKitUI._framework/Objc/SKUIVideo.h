//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SKUIArtworkProviding;

@interface SKUIVideo : NSObject
{
    id<SKUIArtworkProviding> _artworks;
    NSURL *_url;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property (readonly, nonatomic) id<SKUIArtworkProviding> artworks; // @synthesize artworks=_artworks;

- (void).cxx_destruct;
- (id)initWithVideoDictionary:(id)arg1;

@end


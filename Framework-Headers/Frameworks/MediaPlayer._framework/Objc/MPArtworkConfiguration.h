//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3ArtworkConfiguration;

@interface MPArtworkConfiguration : NSObject
{
    ML3ArtworkConfiguration *_artworkConfiguration;
}

@property (strong, nonatomic) ML3ArtworkConfiguration *artworkConfiguration; // @synthesize artworkConfiguration=_artworkConfiguration;

+ (id)systemConfiguration;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfigurationDictionaries:(id)arg1;
- (id)sizesToAutogenerateForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2;
- (id)supportedSizesForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2;

@end


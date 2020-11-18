//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUINowPlayingConfig, VUIPostPlayConfig;

__attribute__((visibility("hidden")))
@interface VUIFeaturesConfiguration : NSObject
{
    VUIPostPlayConfig *_postPlayConfig;
    VUINowPlayingConfig *_nowPlayingConfig;
}

@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig; // @synthesize nowPlayingConfig=_nowPlayingConfig;
@property (readonly, nonatomic) VUIPostPlayConfig *postPlayConfig; // @synthesize postPlayConfig=_postPlayConfig;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithDictionary:(id)arg1;

@end


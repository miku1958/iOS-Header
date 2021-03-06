//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIAutoPlayConfig, VUIDownloadConfig, VUIInAppMessagesConfig, VUINowPlayingConfig, VUIPostPlayConfig;

__attribute__((visibility("hidden")))
@interface VUIFeaturesConfiguration : NSObject
{
    VUIPostPlayConfig *_postPlayConfig;
    VUINowPlayingConfig *_nowPlayingConfig;
    VUIAutoPlayConfig *_autoPlayConfig;
    VUIInAppMessagesConfig *_inAppMessagesConfig;
    VUIDownloadConfig *_downloadConfig;
}

@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig; // @synthesize autoPlayConfig=_autoPlayConfig;
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig; // @synthesize downloadConfig=_downloadConfig;
@property (readonly, nonatomic) VUIInAppMessagesConfig *inAppMessagesConfig; // @synthesize inAppMessagesConfig=_inAppMessagesConfig;
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig; // @synthesize nowPlayingConfig=_nowPlayingConfig;
@property (readonly, nonatomic) VUIPostPlayConfig *postPlayConfig; // @synthesize postPlayConfig=_postPlayConfig;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithDictionary:(id)arg1;

@end


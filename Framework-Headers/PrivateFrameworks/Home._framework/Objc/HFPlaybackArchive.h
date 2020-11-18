//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPPlaybackArchive;

@interface HFPlaybackArchive : NSObject
{
    MPPlaybackArchive *_mediaPlayerPlaybackArchive;
}

@property (readonly, nonatomic) BOOL isRepeatSupported;
@property (readonly, nonatomic) BOOL isShuffleSupported;
@property (strong, nonatomic) MPPlaybackArchive *mediaPlayerPlaybackArchive; // @synthesize mediaPlayerPlaybackArchive=_mediaPlayerPlaybackArchive;
@property (nonatomic, getter=isRepeatEnabled) BOOL repeatEnabled;
@property (nonatomic, getter=isShuffleEnabled) BOOL shuffleEnabled;
@property (nonatomic) unsigned long long targetOptions;

- (void).cxx_destruct;
- (id)initWithMediaPlayerPlaybackArchive:(id)arg1;

@end

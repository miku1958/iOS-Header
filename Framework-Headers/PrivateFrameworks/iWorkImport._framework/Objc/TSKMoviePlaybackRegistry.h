//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TSUMutablePointerSet;

__attribute__((visibility("hidden")))
@interface TSKMoviePlaybackRegistry : NSObject
{
    TSUMutablePointerSet *_playingObjectPointerSet;
    NSString *_savedAudioCategory;
    NSString *_savedAudioMode;
    unsigned long long _savedAudioCategoryOptions;
}

+ (id)sharedMoviePlaybackRegistry;
- (void).cxx_destruct;
- (id)init;
- (void)objectDidEndMoviePlayback:(id)arg1;
- (void)objectWillBeginMoviePlayback:(id)arg1;

@end

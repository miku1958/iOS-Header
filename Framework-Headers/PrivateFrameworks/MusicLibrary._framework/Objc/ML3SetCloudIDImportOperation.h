//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3ImportOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ML3SetCloudIDImportOperation : ML3ImportOperation
{
    NSArray *_trackInfo;
    NSArray *_playlistInfo;
}

- (void).cxx_destruct;
- (BOOL)_importPlaylistsUsingImportSession:(struct ML3ImportSession *)arg1;
- (BOOL)_importTracksUsingImportSession:(struct ML3ImportSession *)arg1;
- (BOOL)_performImportWithTransaction:(id)arg1;
- (unsigned long long)importSource;
- (void)main;

@end


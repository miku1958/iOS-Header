//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUSlideshowMediaItem, PUSlideshowMusicViewController;

@protocol PUSlideshowMusicDelegate <NSObject>

@optional
- (void)musicPicker:(PUSlideshowMusicViewController *)arg1 didPickMediaItem:(PUSlideshowMediaItem *)arg2;
- (void)musicPickerDidFinish:(PUSlideshowMusicViewController *)arg1;
@end

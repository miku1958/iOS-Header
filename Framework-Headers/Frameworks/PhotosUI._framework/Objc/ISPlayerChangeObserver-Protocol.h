//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class ISPlayer, ISPlayerItem;

@protocol ISPlayerChangeObserver <NSObject>

@optional
- (void)player:(ISPlayer *)arg1 didChangePlaybackState:(long long)arg2;
- (void)player:(ISPlayer *)arg1 didChangePlayerItem:(ISPlayerItem *)arg2;
- (void)player:(ISPlayer *)arg1 didChangePlayerStatus:(long long)arg2;
@end


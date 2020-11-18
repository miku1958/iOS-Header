//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface LPVideoViewConfiguration : NSObject <NSCopying>
{
    BOOL _disablePlayback;
    BOOL _disablePlaybackControls;
    BOOL _disableAutoPlay;
}

@property (nonatomic) BOOL disableAutoPlay; // @synthesize disableAutoPlay=_disableAutoPlay;
@property (nonatomic) BOOL disablePlayback; // @synthesize disablePlayback=_disablePlayback;
@property (nonatomic) BOOL disablePlaybackControls; // @synthesize disablePlaybackControls=_disablePlaybackControls;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem;

@interface _NUAVPlayerItemObservation : NSObject
{
    BOOL _registeredKVO;
    AVPlayerItem *_playerItem;
}

@property (strong, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property (nonatomic) BOOL registeredKVO; // @synthesize registeredKVO=_registeredKVO;

- (void).cxx_destruct;

@end


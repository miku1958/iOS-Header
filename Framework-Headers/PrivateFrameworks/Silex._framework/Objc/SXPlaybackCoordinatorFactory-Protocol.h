//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXPlaybackCoordinator;
@protocol SXVideo;

@protocol SXPlaybackCoordinatorFactory <NSObject>
- (SXPlaybackCoordinator *)createPlaybackCoordinatorForVideo:(id<SXVideo>)arg1;
@end


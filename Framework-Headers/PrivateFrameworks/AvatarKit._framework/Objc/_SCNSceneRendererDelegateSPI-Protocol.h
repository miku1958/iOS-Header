//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarKit/NSObject-Protocol.h>

@class NSData, NSString;
@protocol SCNSceneRenderer;

@protocol _SCNSceneRendererDelegateSPI <NSObject>

@optional
- (void)_renderer:(id<SCNSceneRenderer>)arg1 didBuildSubdivDataForHash:(NSString *)arg2 dataProvider:(NSData * (^)(void))arg3;
- (double)_renderer:(id<SCNSceneRenderer>)arg1 inputTimeForCurrentFrameWithTime:(double)arg2;
- (NSData *)_renderer:(id<SCNSceneRenderer>)arg1 subdivDataForHash:(NSString *)arg2;
@end


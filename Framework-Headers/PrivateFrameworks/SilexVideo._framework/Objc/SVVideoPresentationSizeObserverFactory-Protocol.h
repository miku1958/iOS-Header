//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo, SVVideoPresentationSizeObserving;

@protocol SVVideoPresentationSizeObserverFactory <NSObject>
- (id<SVVideoPresentationSizeObserving>)createPresentationSizeObserverForVideo:(id<SVVideo>)arg1;
@end

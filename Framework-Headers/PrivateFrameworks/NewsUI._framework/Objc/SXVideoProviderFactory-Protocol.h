//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol SXVideo, SXVideoProviding;

@protocol SXVideoProviderFactory <NSObject>
- (id<SXVideoProviding>)createVideoProviderForVideo:(id<SXVideo>)arg1;
@end

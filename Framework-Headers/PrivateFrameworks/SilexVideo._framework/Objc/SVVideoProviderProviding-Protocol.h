//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo, SVVideoAdProviding, SVVideoProviding;

@protocol SVVideoProviderProviding <NSObject>
- (id<SVVideoAdProviding>)videoAdProviderForVideo:(id<SVVideo>)arg1;
- (id<SVVideoProviding>)videoProviderForVideo:(id<SVVideo>)arg1;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@protocol MPCPlaybackContextCreating <NSObject>

@optional
- (void)createPlaybackContextWithCompletion:(void (^)(MPPlaybackContext *, NSError *))arg1;
- (void)getPlaybackContextWithCompletion:(void (^)(MPPlaybackContext *, NSError *))arg1;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@protocol MPExclusiveAccessible <NSObject>
- (void)performWithExclusiveAccess:(void (^)(id<MPExclusiveAccessToken>))arg1;
- (BOOL)performWithExclusiveAccessAndReturnBOOL:(BOOL (^)(id<MPExclusiveAccessToken>))arg1;
- (long long)performWithExclusiveAccessAndReturnInteger:(long long (^)(id<MPExclusiveAccessToken>))arg1;
- (id)performWithExclusiveAccessAndReturnObject:(id (^)(id<MPExclusiveAccessToken>))arg1;
@end


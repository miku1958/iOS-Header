//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeperClient/NSObject-Protocol.h>

@class SBCPlaybackPositionEntity;

@protocol SBCDomainValueServiceProtocol <NSObject>
- (oneway void)pullPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 completionBlock:(void (^)(BOOL, NSError *, SBCPlaybackPositionEntity *))arg2;
- (oneway void)pushPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 completionBlock:(void (^)(BOOL, NSError *, SBCPlaybackPositionEntity *))arg2;
@end


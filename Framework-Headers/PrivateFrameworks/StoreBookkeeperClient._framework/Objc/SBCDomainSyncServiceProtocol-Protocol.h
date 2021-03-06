//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeperClient/NSObject-Protocol.h>

@class NSArray, SBCPlaybackPositionEntity;

@protocol SBCDomainSyncServiceProtocol <NSObject>
- (oneway void)beginAccessingPlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)persistPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 isCheckpoint:(BOOL)arg2 completionBlock:(void (^)(BOOL))arg3;
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(NSArray *)arg1 completionBlock:(void (^)(BOOL, NSError *, NSArray *))arg2;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1;
@end


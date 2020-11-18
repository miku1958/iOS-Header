//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarFetchRequest, AVTAvatarRecord, NSArray, NSString;
@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@protocol AVTStoreBackend <NSObject>

@property (weak, nonatomic) id<AVTStoreBackendDelegate> backendDelegate;
@property (readonly, nonatomic) id<AVTAvatarRecordChangeTracker> recordChangeTracker;

- (NSArray *)avatarsForFetchRequest:(AVTAvatarFetchRequest *)arg1 error:(id *)arg2;
- (BOOL)canCreateAvatarWithError:(id *)arg1;
- (BOOL)deleteAvatarWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (AVTAvatarRecord *)duplicateAvatarRecord:(AVTAvatarRecord *)arg1 error:(id *)arg2;
- (BOOL)saveAvatar:(AVTAvatarRecord *)arg1 error:(id *)arg2;
- (BOOL)saveAvatars:(NSArray *)arg1 error:(id *)arg2;
@end

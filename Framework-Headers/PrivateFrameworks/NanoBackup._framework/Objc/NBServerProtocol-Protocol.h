//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoBackup/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol NBServerProtocol <NSObject>
- (void)createBackupForPairingID:(NSUUID *)arg1 completionHandler:(void (^)(NBBackup *, NSError *))arg2;
- (void)deleteBackupID:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)listBackupsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)restoreFromBackupID:(NSUUID *)arg1 forPairingID:(NSUUID *)arg2 pairingDataStore:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end


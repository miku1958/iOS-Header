//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetsdServiceCreating-Protocol.h>

@class NSData, NSURL, PLDaemonJob;

@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating>
- (void)bindToPhotoLibraryURL:(NSURL *)arg1 bookmark:(NSData *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(BOOL)arg2;
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(BOOL)arg2 withReply:(void (^)(NSError *, PLDaemonJobReply *))arg3;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@protocol PLAssetsdClientService <NSObject>
- (void)assetAvailableForIdentifier:(NSString *)arg1 success:(BOOL)arg2 error:(NSError *)arg3;
- (void)downloadFinishedForIdentifier:(NSString *)arg1 success:(BOOL)arg2 url:(NSURL *)arg3 data:(NSData *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)downloadStatusForIdentifier:(NSString *)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(NSData *)arg4 error:(NSError *)arg5;
- (void)resourceURLReceivedForIdentifier:(NSString *)arg1 url:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
@end


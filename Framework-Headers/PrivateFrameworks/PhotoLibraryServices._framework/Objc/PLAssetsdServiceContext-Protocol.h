//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSError, NSString;

@protocol PLAssetsdServiceContext <NSObject>

@property (readonly, copy, nonatomic) NSString *clientDebugDescription;
@property (readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotos;
@property (readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotosAdd;
@property (copy, nonatomic) NSError *replyWarning;

- (void)awaitLibraryState:(long long)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (BOOL)hasEntitlement:(NSString *)arg1;
@end

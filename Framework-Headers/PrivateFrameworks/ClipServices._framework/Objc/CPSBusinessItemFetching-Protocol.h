//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClipServices/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol CPSBusinessItemFetching <NSObject>
- (void)fetchBusinessMetadataForURL:(NSURL *)arg1 availabilityHandler:(void (^)(BOOL))arg2 completion:(void (^)(CPSClipMetadata *, NSError *))arg3;
- (void)fetchBusinessMetadataForURLHash:(NSString *)arg1 completion:(void (^)(CPSClipMetadata *, NSError *))arg2;
@end

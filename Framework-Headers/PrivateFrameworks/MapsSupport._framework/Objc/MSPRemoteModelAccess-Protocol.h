//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class NSData;

@protocol MSPRemoteModelAccess <NSObject>
- (void)commitFavoritesSerializedRepresentation:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)commitHistorySerializedRepresentation:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchFavoritesSerializedRepresentationFileHandleWithCompletion:(void (^)(NSFileHandle *, NSError *))arg1;
- (void)fetchHistorySerializedRepresentationFileHandleWithCompletion:(void (^)(NSFileHandle *, NSError *))arg1;
- (void)testByNotingHistoryChangedOnDisk;
@end


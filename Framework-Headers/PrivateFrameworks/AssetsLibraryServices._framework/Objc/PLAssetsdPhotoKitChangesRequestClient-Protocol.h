//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, PLXPCObject;

@protocol PLAssetsdPhotoKitChangesRequestClient
- (NSString *)clientName;
- (BOOL)sendChangesRequest:(PLXPCObject *)arg1 error:(id *)arg2;
- (void)sendChangesRequest:(PLXPCObject *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
@end


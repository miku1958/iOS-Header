//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCAssetHandle, FCOperation;

@protocol FCAssetHandleDelegate <NSObject>
- (FCOperation *)operationToFetchFileForAssetHandle:(FCAssetHandle *)arg1 completion:(void (^)(NSString *, BOOL, NSError *))arg2;
@end


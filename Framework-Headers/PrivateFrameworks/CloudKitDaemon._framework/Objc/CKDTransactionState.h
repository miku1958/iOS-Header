//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDAssetBatch, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDTransactionState : NSObject
{
    CKDAssetBatch *_assetBatch;
    NSMutableDictionary *_itemByAssetId;
}

@property (strong, nonatomic) CKDAssetBatch *assetBatch; // @synthesize assetBatch=_assetBatch;
@property (strong, nonatomic) NSMutableDictionary *itemByAssetId; // @synthesize itemByAssetId=_itemByAssetId;

- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, PHAsset;

@interface PHAssetDuplicateProperties : NSObject
{
    PHAsset *_asset;
    NSData *_originalHash;
    NSString *_publicGlobalUUID;
}

@property (readonly, weak, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (strong, nonatomic) NSData *originalHash; // @synthesize originalHash=_originalHash;
@property (strong, nonatomic) NSString *publicGlobalUUID; // @synthesize publicGlobalUUID=_publicGlobalUUID;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAsset;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetURLInfo : NSObject
{
    CKAsset *_asset;
    struct _OpaquePCSShareProtection *_recordPCS;
}

@property (strong, nonatomic) CKAsset *asset; // @synthesize asset=_asset;
@property (nonatomic) struct _OpaquePCSShareProtection *recordPCS; // @synthesize recordPCS=_recordPCS;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface DCAsset : NSObject
{
    unsigned long long _version;
    double _publicKeyRefreshInterval;
    NSData *_publicKey;
}

@property (copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property (nonatomic) double publicKeyRefreshInterval; // @synthesize publicKeyRefreshInterval=_publicKeyRefreshInterval;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (id)assetWithMobileAsset:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end


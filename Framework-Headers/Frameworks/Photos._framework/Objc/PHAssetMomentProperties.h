//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PHAsset;

@interface PHAssetMomentProperties : NSObject
{
    BOOL _reverseLocationDataIsValid;
    PHAsset *_asset;
    NSData *_reverseLocationData;
}

@property (readonly, weak, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) NSData *reverseLocationData; // @synthesize reverseLocationData=_reverseLocationData;
@property (readonly, nonatomic) BOOL reverseLocationDataIsValid; // @synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end


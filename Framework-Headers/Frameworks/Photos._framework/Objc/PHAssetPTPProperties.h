//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHAsset;

@interface PHAssetPTPProperties : NSObject
{
    PHAsset *_asset;
    NSString *_exifTimestampString;
    NSString *_importSessionID;
}

@property (readonly, weak, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) NSString *exifTimestampString; // @synthesize exifTimestampString=_exifTimestampString;
@property (readonly, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end


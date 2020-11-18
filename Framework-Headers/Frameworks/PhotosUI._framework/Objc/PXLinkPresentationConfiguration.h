//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PHAsset, UIImage;

@interface PXLinkPresentationConfiguration : NSObject
{
    PHAsset *_keyAsset;
    unsigned long long _photoCount;
    unsigned long long _videoCount;
    unsigned long long _otherItemCount;
    NSDate *_earliestAssetDate;
    NSDate *_latestAssetDate;
    NSDate *_expirationDate;
    UIImage *_placeholderImage;
}

@property (copy, nonatomic) NSDate *earliestAssetDate; // @synthesize earliestAssetDate=_earliestAssetDate;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (strong, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property (copy, nonatomic) NSDate *latestAssetDate; // @synthesize latestAssetDate=_latestAssetDate;
@property (nonatomic) unsigned long long otherItemCount; // @synthesize otherItemCount=_otherItemCount;
@property (nonatomic) unsigned long long photoCount; // @synthesize photoCount=_photoCount;
@property (strong, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property (nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;

- (void).cxx_destruct;
- (id)initWithKeyAsset:(id)arg1;

@end

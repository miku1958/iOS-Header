//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PXAssetMetadataDonator : NSObject
{
    NSCountedSet *_locationDescriptions;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableDictionary *_locationDescriptionsByAssetLocalIdentifiers;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property (strong, nonatomic) NSCountedSet *locationDescriptions; // @synthesize locationDescriptions=_locationDescriptions;
@property (strong, nonatomic) NSMutableDictionary *locationDescriptionsByAssetLocalIdentifiers; // @synthesize locationDescriptionsByAssetLocalIdentifiers=_locationDescriptionsByAssetLocalIdentifiers;

+ (id)new;
+ (id)sharedDonator;
- (void).cxx_destruct;
- (id)_init;
- (void)_notifyWhenDonationIsComplete:(CDUnknownBlockType)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)donate:(id)arg1;
- (void)donateMetadataForAsset:(id)arg1;
- (id)init;

@end


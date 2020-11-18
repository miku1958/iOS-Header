//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetContainer-Protocol.h>

@class NSArray, NSDate, NSOrderedSet, NSString, PLManagedAsset;

@interface PLSimpleAlbum : NSObject <PLAssetContainer>
{
    NSString *_title;
    NSOrderedSet *_assets;
    PLManagedAsset *_keyAsset;
    PLManagedAsset *_secondaryKeyAsset;
    PLManagedAsset *_tertiaryKeyAsset;
}

@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, strong, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (strong, nonatomic) PLManagedAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (strong, nonatomic) PLManagedAsset *secondaryKeyAsset; // @synthesize secondaryKeyAsset=_secondaryKeyAsset;
@property (readonly, strong, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @synthesize tertiaryKeyAsset=_tertiaryKeyAsset;
@property (readonly, strong, nonatomic) NSString *title;
@property (readonly, strong, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long videosCount;

- (long long)_countOfAssetType:(short)arg1;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 assets:(id)arg2;

@end


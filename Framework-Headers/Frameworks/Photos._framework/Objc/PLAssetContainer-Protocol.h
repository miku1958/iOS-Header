//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>
#import <Photos/PLDiagnosticsProvider-Protocol.h>

@class NSArray, NSDate, NSOrderedSet, NSString, PLManagedAsset;

@protocol PLAssetContainer <NSObject, PLDiagnosticsProvider>

@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, strong, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, strong, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isEmpty;
@property (strong, nonatomic) PLManagedAsset *keyAsset;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (strong, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (readonly, strong, nonatomic) NSDate *startDate;
@property (strong, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (readonly, strong, nonatomic) NSString *title;
@property (readonly, strong, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long videosCount;

- (BOOL)canPerformEditOperation:(unsigned long long)arg1;

@optional
@end


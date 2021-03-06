//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration
{
    BOOL _collectionType;
    BOOL _hasNonPurgeableAsset;
    BOOL _storeRedownloadable;
    long long _managedStatus;
}

@property (nonatomic, getter=isCollectionType) BOOL collectionType; // @synthesize collectionType=_collectionType;
@property (nonatomic) BOOL hasNonPurgeableAsset; // @synthesize hasNonPurgeableAsset=_hasNonPurgeableAsset;
@property (nonatomic) long long managedStatus; // @synthesize managedStatus=_managedStatus;
@property (nonatomic, getter=isStoreRedownloadable) BOOL storeRedownloadable; // @synthesize storeRedownloadable=_storeRedownloadable;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end


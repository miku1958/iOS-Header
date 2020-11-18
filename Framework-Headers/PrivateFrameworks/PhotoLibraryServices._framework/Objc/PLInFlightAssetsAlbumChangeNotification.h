//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class NSMutableSet, NSOrderedSet, PLInFlightAssetsAlbum;

@interface PLInFlightAssetsAlbumChangeNotification : PLAssetContainerChangeNotification
{
    PLInFlightAssetsAlbum *_album;
    PLAssetContainerChangeNotification *_backingNotification;
    NSOrderedSet *_oldOIDs;
    NSMutableSet *_uniquedOIDs;
    BOOL _keyAssetDidChange;
}

@property (readonly, strong, nonatomic) PLInFlightAssetsAlbum *album; // @synthesize album=_album;
@property (readonly, strong, nonatomic) PLAssetContainerChangeNotification *backingNotification; // @synthesize backingNotification=_backingNotification;
@property (readonly, strong, nonatomic) NSOrderedSet *oldOIDs; // @synthesize oldOIDs=_oldOIDs;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;
- (id)_changedObjects;
- (id)_diffDescription;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithInFlightAssetsAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (BOOL)keyAssetDidChange;
- (id)object;
- (BOOL)titleDidChange;

@end


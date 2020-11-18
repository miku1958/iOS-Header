//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPhotoSelectionManagerChangeObserver-Protocol.h>

@class NSOrderedSet, NSPointerArray, NSString, PHAssetCollection, PUPhotoSelectionManager;
@protocol PLAlbumProtocol;

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerChangeObserver>
{
    NSPointerArray *_observers;
    BOOL _selectingAssets;
    BOOL _selectingTargetAlbum;
    long long _status;
    PUPhotoSelectionManager *_photoSelectionManager;
    PHAssetCollection *_sourceAlbum;
    NSOrderedSet *_transferredAssets;
    struct NSObject *_targetAlbum;
    NSString *_targetAlbumName;
    NSString *_localizedPrompt;
    long long _promptLocation;
    CDUnknownBlockType _bannerGenerator;
    unsigned long long _selectionLimit;
}

@property (copy, nonatomic) CDUnknownBlockType bannerGenerator; // @synthesize bannerGenerator=_bannerGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *localizedPrompt; // @synthesize localizedPrompt=_localizedPrompt;
@property (strong, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property (nonatomic) long long promptLocation; // @synthesize promptLocation=_promptLocation;
@property (readonly, nonatomic, getter=isSelectingAssets) BOOL selectingAssets; // @synthesize selectingAssets=_selectingAssets;
@property (readonly, nonatomic, getter=isSelectingTargetAlbum) BOOL selectingTargetAlbum; // @synthesize selectingTargetAlbum=_selectingTargetAlbum;
@property (nonatomic) unsigned long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property (strong, nonatomic) PHAssetCollection *sourceAlbum; // @synthesize sourceAlbum=_sourceAlbum;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<PLAlbumProtocol> *targetAlbum; // @synthesize targetAlbum=_targetAlbum;
@property (strong, nonatomic) NSString *targetAlbumName; // @synthesize targetAlbumName=_targetAlbumName;
@property (copy, nonatomic) NSOrderedSet *transferredAssets; // @synthesize transferredAssets=_transferredAssets;

- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)addSessionInfoObserver:(id)arg1;
- (BOOL)hasLocalTargetAlbum;
- (BOOL)hasTargetAlbum;
- (id)init;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (void)removeSessionInfoObserver:(id)arg1;

@end


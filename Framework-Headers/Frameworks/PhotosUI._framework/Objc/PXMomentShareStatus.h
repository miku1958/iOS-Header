//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableMomentShareStatus-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PXCPLUIStatusProvider;
@protocol PXDisplayAssetFetchResult, PXDisplayMomentShare, PXSectionedFetchResult;

@interface PXMomentShareStatus : PXObservable <PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus>
{
    PXCPLUIStatusProvider *_statusProvider;
    id<PXDisplayMomentShare> _momentShare;
    id<PXDisplayAssetFetchResult> _copyingAssetsFetchResult;
    id<PXDisplayAssetFetchResult> _copiedAssetsFetchResult;
    id<PXDisplayAssetFetchResult> _allAssetsFetchResult;
    id<PXSectionedFetchResult> _participantsFetchResult;
}

@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssetsFetchResult; // @synthesize allAssetsFetchResult=_allAssetsFetchResult;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> copiedAssetsFetchResult; // @synthesize copiedAssetsFetchResult=_copiedAssetsFetchResult;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> copyingAssetsFetchResult; // @synthesize copyingAssetsFetchResult=_copyingAssetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<PXDisplayMomentShare> momentShare; // @synthesize momentShare=_momentShare;
@property (readonly, nonatomic) id<PXSectionedFetchResult> participantsFetchResult; // @synthesize participantsFetchResult=_participantsFetchResult;
@property (readonly, nonatomic) PXCPLUIStatusProvider *statusProvider;
@property (readonly) Class superclass;

+ (id)new;
- (void).cxx_destruct;
- (id)_actionManager;
- (id)init;
- (id)initWithMomentShare:(id)arg1;
- (id)owner;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setAllAssetsFetchResult:(id)arg1;
- (void)setCopiedAssetsFetchResult:(id)arg1;
- (void)setCopyingAssetsFetchResult:(id)arg1;
- (void)setMomentShare:(id)arg1;
- (void)setParticipantsFetchResult:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class ISLivePhotoPlayer, NSError, NSString, PUBrowsingViewModel, PUMergedLivePhotosVideo, PUMergedLivePhotosVideoRequest;

__attribute__((visibility("hidden")))
@interface PUOneUpMergedVideoProvider : PXObservable <PUBrowsingViewModelChangeObserver, PXChangeObserver>
{
    PUBrowsingViewModel *_browsingViewModel;
    PUMergedLivePhotosVideo *_mergedVideo;
    ISLivePhotoPlayer *_livePhotoPlayer;
    NSError *_error;
    long long _state;
    PUMergedLivePhotosVideoRequest *_currentRequest;
}

@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property (strong, nonatomic) PUMergedLivePhotosVideoRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) ISLivePhotoPlayer *livePhotoPlayer; // @synthesize livePhotoPlayer=_livePhotoPlayer;
@property (strong, nonatomic) PUMergedLivePhotosVideo *mergedVideo; // @synthesize mergedVideo=_mergedVideo;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRequestChanges:(id)arg1;
- (void)_handleViewModelChanges;
- (void)_updateLivePhotoPlayerItem;
- (id)initWithBrowsingViewModel:(id)arg1;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)setError:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

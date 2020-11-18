//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSHashTable, PUImageRequesterChange, PUMediaProvider, UIImage;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUImageRequester : NSObject
{
    BOOL _useFullsizeImageData;
    BOOL _networkAccessAllowed;
    BOOL _imageIsFullQuality;
    BOOL _imageIsPlaceholder;
    BOOL __needsUpdate;
    BOOL __hasRequestedFullsizeImageData;
    BOOL __hasCurrentIncompleteRequest;
    BOOL __shouldUpdateImageOnCurrentRequestCompletion;
    int __currentFullsizeJPEGRequestID;
    int __currentImageRequestID;
    PUMediaProvider *_mediaProvider;
    id<PUDisplayAsset> _asset;
    UIImage *_image;
    NSData *_fullsizeImageData;
    NSHashTable *__observers;
    long long __changeCount;
    PUImageRequesterChange *__currentChange;
    struct CGSize _targetSize;
    struct CGSize __lastRequestedImageSize;
}

@property (nonatomic, setter=_setChangeCount:) long long _changeCount; // @synthesize _changeCount=__changeCount;
@property (strong, nonatomic, setter=_setCurrentChange:) PUImageRequesterChange *_currentChange; // @synthesize _currentChange=__currentChange;
@property (nonatomic, setter=_setCurrentFullsizeJPEGRequestID:) int _currentFullsizeJPEGRequestID; // @synthesize _currentFullsizeJPEGRequestID=__currentFullsizeJPEGRequestID;
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID; // @synthesize _currentImageRequestID=__currentImageRequestID;
@property (nonatomic, setter=_setCurrentIncompleteRequest:) BOOL _hasCurrentIncompleteRequest; // @synthesize _hasCurrentIncompleteRequest=__hasCurrentIncompleteRequest;
@property (nonatomic, setter=_setHasRequestedFullsizeJPEG:) BOOL _hasRequestedFullsizeImageData; // @synthesize _hasRequestedFullsizeImageData=__hasRequestedFullsizeImageData;
@property (nonatomic, setter=_setLastRequestedImageSize:) struct CGSize _lastRequestedImageSize; // @synthesize _lastRequestedImageSize=__lastRequestedImageSize;
@property (nonatomic, setter=_setNeedsUpdate:) BOOL _needsUpdate; // @synthesize _needsUpdate=__needsUpdate;
@property (strong, nonatomic, setter=_setObserver:) NSHashTable *_observers; // @synthesize _observers=__observers;
@property (nonatomic, setter=_setShouldUpdateImageOnCurrentRequestCompletion:) BOOL _shouldUpdateImageOnCurrentRequestCompletion; // @synthesize _shouldUpdateImageOnCurrentRequestCompletion=__shouldUpdateImageOnCurrentRequestCompletion;
@property (readonly, nonatomic) id<PUDisplayAsset> asset; // @synthesize asset=_asset;
@property (strong, nonatomic, setter=_setFullsizeImageData:) NSData *fullsizeImageData; // @synthesize fullsizeImageData=_fullsizeImageData;
@property (strong, nonatomic, setter=_setImage:) UIImage *image; // @synthesize image=_image;
@property (nonatomic, setter=_setImageIsFullQuality:) BOOL imageIsFullQuality; // @synthesize imageIsFullQuality=_imageIsFullQuality;
@property (nonatomic, setter=_setImageIsPlaceholder:) BOOL imageIsPlaceholder; // @synthesize imageIsPlaceholder=_imageIsPlaceholder;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property (nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property (nonatomic) BOOL useFullsizeImageData; // @synthesize useFullsizeImageData=_useFullsizeImageData;

- (void).cxx_destruct;
- (void)_assertInsideChangesBlock;
- (void)_didChange;
- (void)_handleResultOfFullsizeJPEGDataRequestWithID:(int)arg1 imageData:(id)arg2 dataUTI:(id)arg3 orientation:(long long)arg4 info:(id)arg5;
- (void)_handleResultOfImageRequestWithID:(int)arg1 image:(id)arg2 info:(id)arg3;
- (void)_invalidateImageRequest;
- (void)_publishChange:(id)arg1;
- (void)_update;
- (void)_willChange;
- (void)cancelAllImageRequests;
- (void)handlePreloadedImage:(id)arg1;
- (id)init;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)registerObserver:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateIfNeeded;

@end

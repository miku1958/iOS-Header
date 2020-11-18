//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXHierarchicalContext-Protocol.h>
#import <PhotosUICore/PXMutablePhotosDetailsContext-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSDictionary, NSString, PHFetchResult, PXDisplayTitleInfo, PXPhotosDataSource;

@interface PXPhotosDetailsContext : PXObservable <PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver, PXChangeObserver, PXHierarchicalContext>
{
    BOOL _shouldShowMovieHeader;
    BOOL _shouldUseKeyFace;
    PXPhotosDataSource *_photosDataSource;
    PXDisplayTitleInfo *_displayTitleInfo;
    PXPhotosDetailsContext *_parentContext;
    PHFetchResult *_keyAssetsFetchResult;
    unsigned long long _viewSourceOrigin;
    PHFetchResult *_assetCollections;
    NSDictionary *_assetsByCollection;
    PHFetchResult *_people;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    NSString *_titleFontName;
}

@property (readonly, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
@property (readonly, copy, nonatomic) NSDictionary *assetsByCollection; // @synthesize assetsByCollection=_assetsByCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // @synthesize displayTitleInfo=_displayTitleInfo;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PHFetchResult *keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property (readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property (readonly, weak, nonatomic) PXPhotosDetailsContext *parentContext; // @synthesize parentContext=_parentContext;
@property (readonly, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property (readonly, nonatomic) BOOL shouldShowHeaderTitle;
@property (readonly, nonatomic) BOOL shouldShowMovieHeader; // @synthesize shouldShowMovieHeader=_shouldShowMovieHeader;
@property (readonly, nonatomic) BOOL shouldUseKeyFace; // @synthesize shouldUseKeyFace=_shouldUseKeyFace;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property (readonly, nonatomic) unsigned long long viewSourceOrigin; // @synthesize viewSourceOrigin=_viewSourceOrigin;

+ (id)photosDetailsContextForMemory:(id)arg1;
- (void).cxx_destruct;
- (void)_updatePropertiesDerivedFromDisplayTitleInfo;
- (void)_updatePropertiesDerivedFromPhotosDataSource;
- (id)init;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)setAssetCollections:(id)arg1;
- (void)setAssetsByCollection:(id)arg1;
- (void)setKeyAssetsFetchResult:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setShouldShowMovieHeader:(BOOL)arg1;
- (void)setTitleFontName:(id)arg1;
- (void)setViewSourceOrigin:(unsigned long long)arg1;

@end


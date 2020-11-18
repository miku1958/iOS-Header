//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSDictionary, NSString, PXForYouSuggestionsAssetsDataSource, PXPhotosDataSource, PXSuggestionsDataSource, PXSuggestionsDataSourceManager;
@protocol PXDisplaySuggestion;

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver>
{
    id<PXDisplaySuggestion> _displayOriginalSuggestion;
    PXSuggestionsDataSourceManager *_suggestionsDataSourceManager;
    PXSuggestionsDataSource *_suggestionsDataSource;
}

@property (readonly, nonatomic) PXForYouSuggestionsAssetsDataSource *dataSource; // @dynamic dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<PXDisplaySuggestion> displayOriginalSuggestion; // @synthesize displayOriginalSuggestion=_displayOriginalSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) NSDictionary *snapshotAssetToSuggestionMap;
@property (strong, nonatomic) PXSuggestionsDataSource *suggestionsDataSource; // @synthesize suggestionsDataSource=_suggestionsDataSource;
@property (readonly, nonatomic) PXSuggestionsDataSourceManager *suggestionsDataSourceManager; // @synthesize suggestionsDataSourceManager=_suggestionsDataSourceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)initWithSuggestionsDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end

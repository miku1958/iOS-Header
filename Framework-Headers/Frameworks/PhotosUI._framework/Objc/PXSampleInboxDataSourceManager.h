//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXInboxModelDataSourceManager.h>

#import <PhotosUICore/PXInboxModelTitleProvider-Protocol.h>
#import <PhotosUICore/PXInboxProviderSource-Protocol.h>

@class NSArray, NSString, PXSampleInboxMediaProvider;
@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider, PXInboxModelTitleProvider;

@interface PXSampleInboxDataSourceManager : PXInboxModelDataSourceManager <PXInboxProviderSource, PXInboxModelTitleProvider>
{
    NSArray *_mockedModels;
    PXSampleInboxMediaProvider *_sampleMediaProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<PXInboxModelMediaProvider> mediaProvider;
@property (strong, nonatomic) NSArray *mockedModels; // @synthesize mockedModels=_mockedModels;
@property (strong, nonatomic) PXSampleInboxMediaProvider *sampleMediaProvider; // @synthesize sampleMediaProvider=_sampleMediaProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PXInboxModelTitleProvider> titleProvider;

- (void).cxx_destruct;
- (void)_changeData;
- (id)_dataSourceSnapshot;
- (void)_generateModels;
- (id)_modelElements;
- (void)_updateDataSource;
- (id)createInitialDataSource;
- (id)init;
- (id)providerSource;
- (void)requestTitleAndSubtitleForModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)subtitleForModel:(id)arg1;
- (id)titleForModel:(id)arg1;

@end


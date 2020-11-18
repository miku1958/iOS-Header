//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class PXAssetsDataSource;

@interface PXZoomableInlineHeadersDataSource : PXSectionedDataSource
{
    long long _numberOfSections;
    unsigned long long _level;
    unsigned long long _type;
    CDStruct_68723fc0 *_sectionInfos;
    PXAssetsDataSource *_assetsDataSource;
}

@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property (readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property (readonly, nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property (readonly, nonatomic) CDStruct_68723fc0 *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAssetsDataSource:(id)arg1 level:(unsigned long long)arg2 metaDataStore:(id)arg3;

@end

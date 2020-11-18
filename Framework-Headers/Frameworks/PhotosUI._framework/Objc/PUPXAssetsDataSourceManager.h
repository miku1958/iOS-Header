//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSourceManager.h>

#import <PhotosUI/PXAssetsDataSourceManagerObserver-Protocol.h>

@class NSString, PXAssetsDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPXAssetsDataSourceManager : PUAssetsDataSourceManager <PXAssetsDataSourceManagerObserver>
{
    PXAssetsDataSourceManager *_underlyingDataSourceManager;
    long long __currentUpdateID;
}

@property (nonatomic, setter=_setCurrentUpdateId:) long long _currentUpdateID; // @synthesize _currentUpdateID=__currentUpdateID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXAssetsDataSourceManager *underlyingDataSourceManager; // @synthesize underlyingDataSourceManager=_underlyingDataSourceManager;

- (void).cxx_destruct;
- (void)_handleScheduledUpdateWithID:(long long)arg1;
- (void)_scheduleUpdate;
- (void)_update;
- (id)init;
- (id)initWithUnderlyingDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)photosDataSource;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotosDataSourceProvider-Protocol.h>

@class NSString;
@protocol NSFastEnumeration;

@interface _PXPhotosViewPlacesMomentsDataSourceProvider : NSObject <PXPhotosDataSourceProvider>
{
    id<NSFastEnumeration> _assets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1;
- (id)initWithAllowedAssets:(id)arg1;
- (id)loadInitialPhotosDataSourceForDataSourceManager:(id)arg1;

@end


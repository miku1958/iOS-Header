//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, NSString;

@interface PXSmartAlbumCameraModelCondition : PXSmartAlbumEXIFCondition
{
    NSArray *_cameraModels;
}

@property (strong, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) NSArray *cameraModels;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions
{
    double _headerViewHeight;
    double _cameraViewAspectRatio;
    double _headerHorizontalInnerMargins;
    double _cellHeight;
}

@property (nonatomic) double cameraViewAspectRatio; // @synthesize cameraViewAspectRatio=_cameraViewAspectRatio;
@property (nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property (nonatomic) double headerHorizontalInnerMargins; // @synthesize headerHorizontalInnerMargins=_headerHorizontalInnerMargins;
@property (nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


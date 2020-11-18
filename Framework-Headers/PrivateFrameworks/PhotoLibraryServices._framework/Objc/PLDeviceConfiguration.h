//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLDeviceConfiguration : NSObject
{
    BOOL _isPad;
    BOOL _isTV;
    BOOL _isWatch;
    BOOL _isRidingCrudSnow;
    BOOL _isRidingPowderSnow;
    BOOL _isRetina;
    double _screenScale;
    struct CGSize _logicalScreenSize;
}

@property (nonatomic) BOOL isPad; // @synthesize isPad=_isPad;
@property (nonatomic) BOOL isRetina; // @synthesize isRetina=_isRetina;
@property (readonly, nonatomic) BOOL isRidingCrudSnow; // @synthesize isRidingCrudSnow=_isRidingCrudSnow;
@property (readonly, nonatomic) BOOL isRidingPowderSnow; // @synthesize isRidingPowderSnow=_isRidingPowderSnow;
@property (nonatomic) BOOL isTV; // @synthesize isTV=_isTV;
@property (nonatomic) BOOL isWatch; // @synthesize isWatch=_isWatch;
@property (readonly, nonatomic) struct CGSize logicalScreenSize; // @synthesize logicalScreenSize=_logicalScreenSize;
@property (readonly, nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property (readonly, nonatomic) BOOL shouldUseNanoThumbnailFormats; // @dynamic shouldUseNanoThumbnailFormats;

+ (id)defaultDeviceConfiguration;
- (id)description;
- (id)initWithLogicalScreenSize:(struct CGSize)arg1 screenScale:(double)arg2 isRidingCrudSnow:(BOOL)arg3 isRidingPowderSnow:(BOOL)arg4;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CITileFilter.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CITile2Filter : CITileFilter
{
    NSNumber *inputAcuteAngle;
}

@property (strong, nonatomic) NSNumber *inputAcuteAngle; // @synthesize inputAcuteAngle;

+ (id)customAttributes;
- (double)_roiArea;
- (struct vec2)_roiCenter;
- (struct CGRect)_roiRect;
- (id)_singlePixelImage;
- (id)outputImage;

@end


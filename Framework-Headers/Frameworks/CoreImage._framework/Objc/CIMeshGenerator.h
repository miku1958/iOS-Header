//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMeshGenerator : CIFilter
{
    NSNumber *inputWidth;
    CIColor *inputColor;
    NSArray *inputMesh;
}

@property (strong, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property (strong, nonatomic) NSArray *inputMesh; // @synthesize inputMesh;
@property (strong, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;

+ (id)customAttributes;
- (id)_CIMesh1;
- (id)_CIMesh16;
- (id)_CIMesh2;
- (id)_CIMesh32;
- (id)_CIMesh4;
- (id)_CIMesh8;
- (struct CGRect)extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3;
- (id)outputImage;

@end


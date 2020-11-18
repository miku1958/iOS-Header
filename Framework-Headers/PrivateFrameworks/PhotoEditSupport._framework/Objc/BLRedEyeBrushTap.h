//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoEditSupport/AutoEncodeDecodeObject.h>

@class NSDictionary;

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject
{
    int _destinationWidth;
    double _timestamp;
    NSDictionary *_eyeRepairData;
    struct CGPoint _point;
}

@property (nonatomic) int destinationWidth; // @synthesize destinationWidth=_destinationWidth;
@property (strong, nonatomic) NSDictionary *eyeRepairData; // @synthesize eyeRepairData=_eyeRepairData;
@property (nonatomic) struct CGPoint point; // @synthesize point=_point;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void)dealloc;
- (id)init;
- (id)keysToEncode;

@end


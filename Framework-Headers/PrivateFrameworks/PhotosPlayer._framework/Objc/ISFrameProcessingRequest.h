//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage;

@interface ISFrameProcessingRequest : NSObject
{
    CIImage *_image;
    long long _type;
    double _renderScale;
    CDStruct_1b6d18a9 _time;
}

@property (strong, nonatomic) CIImage *image; // @synthesize image=_image;
@property (nonatomic) double renderScale; // @synthesize renderScale=_renderScale;
@property (nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property (nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;

@end


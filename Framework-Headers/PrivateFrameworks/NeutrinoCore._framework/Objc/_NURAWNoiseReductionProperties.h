//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURAWNoiseReductionProperties-Protocol.h>

@class NSString;

@interface _NURAWNoiseReductionProperties : NSObject <NURAWNoiseReductionProperties>
{
    double _luminance;
    double _color;
    double _sharpness;
    double _contrast;
    double _detail;
}

@property double color; // @synthesize color=_color;
@property double contrast; // @synthesize contrast=_contrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double detail; // @synthesize detail=_detail;
@property (readonly) unsigned long long hash;
@property double luminance; // @synthesize luminance=_luminance;
@property double sharpness; // @synthesize sharpness=_sharpness;
@property (readonly) Class superclass;


@end


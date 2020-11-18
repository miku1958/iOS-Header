//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKInkFeatheringDescriptor : NSObject
{
    double _touchStartCapTime;
    double _touchStartCapFade;
    double _touchEndCapTime;
    double _touchEndCapFade;
}

@property (nonatomic) double touchEndCapFade; // @synthesize touchEndCapFade=_touchEndCapFade;
@property (nonatomic) double touchEndCapTime; // @synthesize touchEndCapTime=_touchEndCapTime;
@property (nonatomic) double touchStartCapFade; // @synthesize touchStartCapFade=_touchStartCapFade;
@property (nonatomic) double touchStartCapTime; // @synthesize touchStartCapTime=_touchStartCapTime;

+ (id)descriptorWithStartCapTime:(double)arg1 startCapFade:(double)arg2 endCapTime:(double)arg3 endCapFade:(double)arg4;

@end


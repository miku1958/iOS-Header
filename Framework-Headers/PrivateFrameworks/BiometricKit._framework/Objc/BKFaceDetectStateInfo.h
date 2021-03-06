//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject
{
    BOOL _faceDetected;
    BOOL _tooCloseToCamera;
    BOOL _tooFarFromCamera;
    BOOL _multipleFaces;
    BOOL _flare;
    BOOL _occlusion;
    BOOL _partiallyOutOfView;
    NSNumber *_pitch;
    NSNumber *_yaw;
    NSNumber *_roll;
    unsigned long long _orientation;
}

@property (readonly, nonatomic) BOOL faceDetected; // @synthesize faceDetected=_faceDetected;
@property (readonly, nonatomic) BOOL flare; // @synthesize flare=_flare;
@property (readonly, nonatomic) BOOL multipleFaces; // @synthesize multipleFaces=_multipleFaces;
@property (readonly, nonatomic) BOOL occlusion; // @synthesize occlusion=_occlusion;
@property (readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property (readonly, nonatomic) BOOL partiallyOutOfView; // @synthesize partiallyOutOfView=_partiallyOutOfView;
@property (readonly, nonatomic) NSNumber *pitch; // @synthesize pitch=_pitch;
@property (readonly, nonatomic) NSNumber *roll; // @synthesize roll=_roll;
@property (readonly, nonatomic) BOOL tooCloseToCamera; // @synthesize tooCloseToCamera=_tooCloseToCamera;
@property (readonly, nonatomic) BOOL tooFarFromCamera; // @synthesize tooFarFromCamera=_tooFarFromCamera;
@property (readonly, nonatomic) NSNumber *yaw; // @synthesize yaw=_yaw;

- (void).cxx_destruct;

@end


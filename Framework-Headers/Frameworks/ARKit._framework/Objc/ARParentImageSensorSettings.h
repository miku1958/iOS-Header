//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class NSArray;

@interface ARParentImageSensorSettings : NSObject <NSCopying>
{
    BOOL _audioCaptureEnabled;
    BOOL _allowCameraInMultipleForegroundAppLayout;
    NSArray *_settings;
}

@property (nonatomic) BOOL allowCameraInMultipleForegroundAppLayout; // @synthesize allowCameraInMultipleForegroundAppLayout=_allowCameraInMultipleForegroundAppLayout;
@property (nonatomic) BOOL audioCaptureEnabled; // @synthesize audioCaptureEnabled=_audioCaptureEnabled;
@property (copy, nonatomic) NSArray *settings; // @synthesize settings=_settings;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

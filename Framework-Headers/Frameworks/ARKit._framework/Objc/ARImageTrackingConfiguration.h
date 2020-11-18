//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration
{
    NSSet *_trackingImages;
    long long _maximumNumberOfTrackedImages;
}

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled; // @dynamic autoFocusEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages; // @synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages;
@property (copy, nonatomic) NSSet *trackingImages; // @synthesize trackingImages=_trackingImages;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end


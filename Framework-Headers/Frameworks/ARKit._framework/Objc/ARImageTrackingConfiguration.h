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

+ (id)new;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/NSCoding-Protocol.h>

@class NSDictionary;

@interface CAMPanoramaConfiguration : NSObject <NSCoding>
{
    int _ringBufferSize;
    long long _sampleBufferWidth;
    long long _sampleBufferHeight;
    long long _maxWidth;
    NSDictionary *__maxWidthPerDevice;
    CDStruct_1b6d18a9 _minimumFramerate;
    CDStruct_1b6d18a9 _maximumFramerate;
}

@property (strong, nonatomic) NSDictionary *_maxWidthPerDevice; // @synthesize _maxWidthPerDevice=__maxWidthPerDevice;
@property (readonly, nonatomic) long long maxWidth; // @synthesize maxWidth=_maxWidth;
@property (readonly, nonatomic) CDStruct_1b6d18a9 maximumFramerate; // @synthesize maximumFramerate=_maximumFramerate;
@property (readonly, nonatomic) CDStruct_1b6d18a9 minimumFramerate; // @synthesize minimumFramerate=_minimumFramerate;
@property (readonly, nonatomic) int ringBufferSize; // @synthesize ringBufferSize=_ringBufferSize;
@property (readonly, nonatomic) long long sampleBufferHeight; // @synthesize sampleBufferHeight=_sampleBufferHeight;
@property (readonly, nonatomic) long long sampleBufferWidth; // @synthesize sampleBufferWidth=_sampleBufferWidth;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithACTConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)maxWidthForDevice:(long long)arg1;

@end


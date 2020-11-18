//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDVideoResolution, NSNumber;

@interface HMDVideoAttributes : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    HMDVideoResolution *_videoResolution;
    NSNumber *_framerate;
}

@property (readonly, copy, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property (readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property (readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
@property (readonly, copy, nonatomic) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;

+ (BOOL)supportsSecureCoding;
+ (BOOL)translateImageResolution:(id)arg1 imageWidth:(id *)arg2 imageHeight:(id *)arg3;
- (void).cxx_destruct;
- (BOOL)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResolution:(id)arg1 framerate:(id)arg2;
- (id)tlvData;
- (id)translateImageWidth:(id)arg1 imageHeight:(id)arg2;

@end


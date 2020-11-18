//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDVideoResolution : HAPNumberParser <NSSecureCoding, NSCopying>
{
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    unsigned long long _resolutionType;
}

@property (readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property (readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
@property (readonly, nonatomic) unsigned long long resolutionType; // @synthesize resolutionType=_resolutionType;

+ (id)arrayWithResolutions:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_extractWidthAndHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResolution:(unsigned long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

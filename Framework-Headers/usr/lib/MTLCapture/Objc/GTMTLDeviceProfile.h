//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/NSSecureCoding-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice;

@interface GTMTLDeviceProfile : NSObject <NSSecureCoding>
{
    id<MTLDevice> _device;
    NSString *_name;
    NSArray *_supportedFeatureSets;
    NSArray *_supportedGPUFamilies;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *supportedFeatureSets;
@property (readonly, nonatomic) NSArray *supportedGPUFamilies;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

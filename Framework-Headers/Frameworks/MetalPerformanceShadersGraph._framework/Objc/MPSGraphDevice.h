//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLDevice;

@interface MPSGraphDevice : NSObject
{
    id<MTLDevice> _mtlDevice;
    unsigned int _type;
    unsigned int _deviceType;
    id<MTLDevice> _metalDevice;
}

@property (readonly, nonatomic) id<MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
@property (readonly, nonatomic) unsigned int type; // @synthesize type=_deviceType;

+ (id)deviceWithMTLDevice:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;

@end

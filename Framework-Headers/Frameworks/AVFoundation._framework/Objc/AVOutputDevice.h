//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputDeviceInternal, NSString;

@interface AVOutputDevice : NSObject
{
    AVOutputDeviceInternal *_outputDevice;
}

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *name;

+ (id)sharedLocalDevice;
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;
- (id)_weakReference;
- (void)dealloc;
- (struct OpaqueFigEndpoint *)figEndpoint;
- (void)finalize;
- (double)frecencyScore;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setSecondDisplayEnabled:(BOOL)arg1;
- (void)updateFrecencyScore;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UISDeviceContext;

__attribute__((visibility("hidden")))
@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject
{
    UISDeviceContext *_context;
    BOOL _hasRequestedPreload;
}

@property (readonly, nonatomic) UISDeviceContext *initialDeviceContext;

+ (id)sharedLoader;
- (void).cxx_destruct;
- (void)_startPreloadInitialDeviceContext;

@end

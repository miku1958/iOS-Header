//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVExternalDeviceControllerInternal, NSArray;
@protocol AVExternalDeviceControllerDelegate;

@interface AVExternalDeviceController : NSObject
{
    AVExternalDeviceControllerInternal *_externalDeviceController;
}

@property (readonly, copy, nonatomic) NSArray *availableExternalDevices;
@property (weak, nonatomic) id<AVExternalDeviceControllerDelegate> delegate;
@property (nonatomic) long long discoveryMode;

- (void)dealloc;
- (id)init;
- (BOOL)isExternalDeviceCurrent:(id)arg1;
- (BOOL)setCurrentExternalDevice:(id)arg1;
- (BOOL)setCurrentExternalDevice:(id)arg1 withPassword:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMSetupSupport/NSObject-Protocol.h>

@class AVCaptureConnection, AVCaptureOutput, NSArray;

@protocol AVCaptureMetadataOutputObjectsDelegate <NSObject>

@optional
- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputMetadataObjects:(NSArray *)arg2 fromConnection:(AVCaptureConnection *)arg3;
@end


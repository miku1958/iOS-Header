//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVDepthData;

@interface AVCaptureSynchronizedDepthDataInternal : NSObject
{
    AVDepthData *depthData;
    BOOL depthDataWasDropped;
    long long droppedReason;
}

@end

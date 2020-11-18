//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
}

@property (readonly, getter=isBrowsing) BOOL browsing;
@property id<ICDeviceBrowserDelegate> delegate;
@property (readonly) NSArray *devices;

- (void)dealloc;
- (id)init;
- (id)internalDevices;
- (int)start;
- (void)stop;

@end


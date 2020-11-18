//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class NSArray;
@protocol PXRunNodeDelegate;

@protocol PXRunNode <NSObject>

@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;

- (void)cancel;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSPathProviding-Protocol.h>

@class NSString, NSURL;

@interface BSCurrentContainerPathProvider : NSObject <BSPathProviding>
{
}

@property (readonly, nonatomic) NSURL *cachesPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *defaultPath;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *libraryPath;
@property (readonly) Class superclass;


@end

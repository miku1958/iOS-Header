//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol FMDAudioAccessory <NSObject>

@property (readonly, nonatomic) NSString *audioRoutingIdentifier;
@property (readonly, nonatomic) NSURL *audioURL;
@property (readonly, nonatomic) BOOL playingSound;

@end

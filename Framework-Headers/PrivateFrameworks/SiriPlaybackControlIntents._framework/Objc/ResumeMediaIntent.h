//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

@class DeviceQuery, NSArray, NSString;

@interface ResumeMediaIntent : INIntent
{
}

@property (copy, nonatomic) NSArray *deviceContext; // @dynamic deviceContext;
@property (copy, nonatomic) DeviceQuery *deviceQuery; // @dynamic deviceQuery;
@property (copy, nonatomic) NSArray *devices; // @dynamic devices;
@property (nonatomic) long long mediaType; // @dynamic mediaType;
@property (copy, nonatomic) NSString *targetBundleIdentifier; // @dynamic targetBundleIdentifier;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBPlatformSupport <NSObject>

@property (readonly, nonatomic) BOOL hasMinimumOsVersion;
@property (nonatomic) BOOL hasSupportedPlatform;
@property (copy, nonatomic) NSString *minimumOsVersion;
@property (nonatomic) int supportedPlatform;

- (int)StringAsSupportedPlatform:(NSString *)arg1;
- (NSString *)supportedPlatformAsString:(int)arg1;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying>
{
}

@property (nonatomic) BOOL debuggingEnabled; // @dynamic debuggingEnabled;
@property (nonatomic) BOOL fastMathEnabled; // @dynamic fastMathEnabled;
@property (nonatomic) BOOL glBufferBindPoints; // @dynamic glBufferBindPoints;
@property (nonatomic) unsigned long long languageVersion; // @dynamic languageVersion;
@property (copy, nonatomic) NSDictionary *preprocessorMacros; // @dynamic preprocessorMacros;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


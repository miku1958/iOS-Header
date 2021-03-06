//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSString;

@interface _NSHTTPAlternativeServicesFilter : NSObject <NSCopying>
{
    NSString *_host;
    NSString *_partition;
    long long _port;
}

@property (strong, nonatomic) NSString *host; // @synthesize host=_host;
@property (strong, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property (nonatomic) long long port; // @synthesize port=_port;

+ (id)emptyFilter;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


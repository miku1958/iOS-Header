//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSString;

@interface NSHTTPCookie2Key : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_domain;
    NSString *_path;
    NSString *_partition;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end


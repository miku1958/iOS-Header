//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface QLCacheBlobInfo : NSObject
{
    unsigned long long location;
    unsigned long long length;
}

@property unsigned long long length; // @synthesize length;
@property unsigned long long location; // @synthesize location;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end


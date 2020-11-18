//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/NSCopying-Protocol.h>

@interface PFChecksum : NSObject <NSCopying>
{
    struct PFChecksumBytes _bytes;
}

- (struct PFChecksumBytes)checksumBytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBytes:(struct PFChecksumBytes)arg1;
- (id)initWithChecksumAsData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBytes:(struct PFChecksumBytes)arg1;
- (id)string;

@end


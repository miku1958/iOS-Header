//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>
{
    unsigned long long _hashType;
}

@property (nonatomic) unsigned long long hashType; // @synthesize hashType=_hashType;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithHashType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end


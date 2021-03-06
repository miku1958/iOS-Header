//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CKPackageSection : NSObject
{
    long long _index;
    NSData *_signature;
    unsigned long long _size;
}

@property (readonly, nonatomic) long long index; // @synthesize index=_index;
@property (readonly, copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property (nonatomic) unsigned long long size; // @synthesize size=_size;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface HAPFragmentationPacket : NSObject
{
    unsigned short _transactionIdentifier;
    unsigned int _length;
    unsigned int _offset;
    NSData *_data;
}

@property (readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) unsigned int length; // @synthesize length=_length;
@property (readonly, nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property (readonly, nonatomic) unsigned short transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned int)arg3 offset:(unsigned int)arg4;
- (id)initWithFragmentedPacketData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)serialize;
- (id)shortDescription;

@end


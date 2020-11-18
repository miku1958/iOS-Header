//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TSUZipEntry : NSObject
{
    BOOL _compressed;
    unsigned short _nameLength;
    unsigned short _extraFieldLength;
    unsigned int _CRC;
    NSString *_name;
    unsigned long long _size;
    unsigned long long _compressedSize;
    unsigned long long _offset;
}

@property (nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property (nonatomic, getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property (nonatomic) unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property (nonatomic) unsigned short extraFieldLength; // @synthesize extraFieldLength=_extraFieldLength;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned short nameLength; // @synthesize nameLength=_nameLength;
@property (nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property (nonatomic) unsigned long long size; // @synthesize size=_size;

- (void).cxx_destruct;
- (id)description;

@end


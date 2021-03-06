//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUDictionaryCodable-Protocol.h>

@class NSArray;

@interface CUFileResponse : NSObject <CUDictionaryCodable>
{
    unsigned int _flags;
    NSArray *_fileItems;
}

@property (copy, nonatomic) NSArray *fileItems; // @synthesize fileItems=_fileItems;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end


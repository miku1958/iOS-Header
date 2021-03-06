//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGSeekable-Protocol.h>

@class NSData, NSString;

@interface SGSeekableData : NSObject <SGSeekable>
{
    NSData *_data;
    const void *_bytes;
    unsigned long long _length;
    unsigned long long _offsetInFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long offsetInFile; // @synthesize offsetInFile=_offsetInFile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const void *)dataOfLength:(unsigned long long)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithMemoryMappedPath:(id)arg1;
- (id)initWithMemoryMappedPath:(id)arg1 error:(id *)arg2;
- (void)seekToFileOffset:(unsigned long long)arg1;

@end


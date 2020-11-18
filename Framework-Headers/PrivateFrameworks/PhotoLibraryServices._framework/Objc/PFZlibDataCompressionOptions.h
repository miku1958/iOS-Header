//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PFZlibDataCompressionOptions : NSObject
{
    int _compressionLevel;
    int _strategy;
    int _windowBits;
    int _memoryLevel;
    int _chunkSize;
}

@property (nonatomic) int chunkSize; // @synthesize chunkSize=_chunkSize;
@property (nonatomic) int compressionLevel; // @synthesize compressionLevel=_compressionLevel;
@property (nonatomic) int memoryLevel; // @synthesize memoryLevel=_memoryLevel;
@property (nonatomic) int strategy; // @synthesize strategy=_strategy;
@property (nonatomic) int windowBits; // @synthesize windowBits=_windowBits;

+ (id)defaultOptions;
- (void)setCompressionStrategy:(int)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASTrafficLogger, NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : NSObject
{
    BOOL _moreDataExpected;
    BOOL _keepPreviousData;
    BOOL _lastLookedAtBufferHadStringEndPrefix;
    int _streamingState;
    int _codePage;
    int _dataGeneration;
    unsigned int _lastFoundBufferWithoutLineEnding;
    unsigned int _numTokensInBuffersWithoutLineEndings;
    long long _curOffset;
    NSString *_parseErrorReason;
    long long _expectedTotalBytesCount;
    long long _currentBytesReceivedCount;
    NSMutableArray *_dataBuffers;
    unsigned long long _offsetIntoFirstData;
    NSMutableArray *_bypassedDataBuffers;
    NSFileHandle *_logFileHandle;
    NSString *_logFilePath;
    ASTrafficLogger *_trafficLogger;
}

@property (strong, nonatomic) NSMutableArray *bypassedDataBuffers; // @synthesize bypassedDataBuffers=_bypassedDataBuffers;
@property (nonatomic) int codePage; // @synthesize codePage=_codePage;
@property (nonatomic) long long curOffset; // @synthesize curOffset=_curOffset;
@property (nonatomic) long long currentBytesReceivedCount; // @synthesize currentBytesReceivedCount=_currentBytesReceivedCount;
@property (strong, nonatomic) NSMutableArray *dataBuffers; // @synthesize dataBuffers=_dataBuffers;
@property (nonatomic) int dataGeneration; // @synthesize dataGeneration=_dataGeneration;
@property (nonatomic) long long expectedTotalBytesCount; // @synthesize expectedTotalBytesCount=_expectedTotalBytesCount;
@property (nonatomic) BOOL keepPreviousData; // @synthesize keepPreviousData=_keepPreviousData;
@property (nonatomic) unsigned int lastFoundBufferWithoutLineEnding; // @synthesize lastFoundBufferWithoutLineEnding=_lastFoundBufferWithoutLineEnding;
@property (nonatomic) BOOL lastLookedAtBufferHadStringEndPrefix; // @synthesize lastLookedAtBufferHadStringEndPrefix=_lastLookedAtBufferHadStringEndPrefix;
@property (strong, nonatomic) NSFileHandle *logFileHandle; // @synthesize logFileHandle=_logFileHandle;
@property (strong, nonatomic) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property (nonatomic) BOOL moreDataExpected; // @synthesize moreDataExpected=_moreDataExpected;
@property (nonatomic) unsigned int numTokensInBuffersWithoutLineEndings; // @synthesize numTokensInBuffersWithoutLineEndings=_numTokensInBuffersWithoutLineEndings;
@property (nonatomic) unsigned long long offsetIntoFirstData; // @synthesize offsetIntoFirstData=_offsetIntoFirstData;
@property (strong, nonatomic) NSString *parseErrorReason; // @synthesize parseErrorReason=_parseErrorReason;
@property (nonatomic) int streamingState; // @synthesize streamingState=_streamingState;
@property (strong, nonatomic) ASTrafficLogger *trafficLogger; // @synthesize trafficLogger=_trafficLogger;

- (void).cxx_destruct;
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)arg1;
- (void)addData:(id)arg1;
- (BOOL)advanceOffsetByAmount:(unsigned int)arg1;
- (BOOL)advanceOffsetByAmount:(unsigned int)arg1 retainLastToken:(BOOL)arg2;
- (char *)bufferForLength:(unsigned int)arg1 shouldFree:(BOOL *)arg2;
- (id)bufferWithAllData;
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned int)arg1;
- (unsigned char)currentByte;
- (void)dealloc;
- (void)flushLogs;
- (long long)goodSizeForBuffer;
- (BOOL)hasNumberOfTokensRemaining:(unsigned int)arg1;
- (id)init;
- (void)invalidateBuffers;
- (unsigned char)nextByte;
- (int)numTokensForNextOpaqueData;
- (int)numTokensForNextString;
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)arg1;
- (int)numberOfBytesUntilStringEnd:(char *)arg1 searchStringLength:(int)arg2 acceptingBufferBits:(BOOL)arg3;
- (void)resetToZeroOffset;
- (void)setShouldLog:(BOOL)arg1;

@end


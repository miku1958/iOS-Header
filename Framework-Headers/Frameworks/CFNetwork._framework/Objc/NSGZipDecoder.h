//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLDownloadDecoder-Protocol.h>

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder>
{
    struct z_stream_s _stream;
    unsigned long long _modificationTime;
    NSString *_filename;
    BOOL _streamInitialized;
    BOOL _decodedHeader;
    BOOL _finishedInflating;
    BOOL _pad;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)decodeData:(id)arg1;
- (BOOL)decodeDownloadData:(id)arg1 dataForkData:(id *)arg2 resourceForkData:(id *)arg3;
- (id)fileAttributes;
- (id)filenameWithOriginalFilename:(id)arg1;
- (BOOL)finishDownloadDecoding;
- (id)init;
- (BOOL)isFinishedDecoding;

@end


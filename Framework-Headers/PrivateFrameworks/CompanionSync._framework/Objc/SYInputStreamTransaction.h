//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYStreamTransaction-Protocol.h>

@class NSDictionary, NSInputStream, NSProgress, NSString, NSURL;
@protocol SYStreamEventHandlerBlocks><SYStreamProgress;

@interface SYInputStreamTransaction : NSObject <SYStreamTransaction>
{
    NSInputStream<SYStreamEventHandlerBlocks><SYStreamProgress> *_stream;
    NSDictionary *_metadata;
    NSURL *_fileURL;
    NSProgress *_progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_stream;
@property (readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 metadata:(id)arg2 decompressedSize:(unsigned long long)arg3;

@end

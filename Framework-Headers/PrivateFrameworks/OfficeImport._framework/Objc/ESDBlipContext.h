//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OCDDelayedMediaContext-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ESDBlipContext : NSObject <OCDDelayedMediaContext>
{
    struct SsrwOOStream *mStream;
    unsigned int mStreamID;
    unsigned int mStartOffset;
    unsigned int mByteCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dataRep;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 stream:(struct SsrwOOStream *)arg3 streamID:(unsigned int)arg4;
- (BOOL)loadDelayedNode:(id)arg1;
- (BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (struct SsrwOOStream *)stream;

@end


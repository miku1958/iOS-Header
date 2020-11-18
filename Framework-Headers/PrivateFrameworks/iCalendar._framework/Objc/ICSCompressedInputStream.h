//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSInputByteStream-Protocol.h>

@class NSData, NSString;

@interface ICSCompressedInputStream : NSObject <ICSInputByteStream>
{
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } underStream;
    NSData *rawData;
    void *buffer;
    unsigned long long bufPos;
    unsigned long long bufLen;
    BOOL finalBlock;
    BOOL didFinalize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)eos;
- (id)initWithData:(id)arg1;
- (BOOL)read;

@end

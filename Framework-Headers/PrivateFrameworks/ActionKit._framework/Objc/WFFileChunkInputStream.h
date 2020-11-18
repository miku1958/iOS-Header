//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@interface WFFileChunkInputStream : NSInputStream
{
    unsigned long long _offset;
    unsigned long long _length;
    NSInputStream *_inputStream;
}

@property (readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property (readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;

- (void).cxx_destruct;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(const struct __CFString *)arg2;
- (BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(const struct __CFString *)arg2;
- (void)close;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (BOOL)hasBytesAvailable;
- (id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end

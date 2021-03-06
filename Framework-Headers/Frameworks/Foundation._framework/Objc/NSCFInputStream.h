//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

__attribute__((visibility("hidden")))
@interface NSCFInputStream : NSInputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (BOOL)allowsWeakReference;
- (void)close;
- (id)delegate;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (BOOL)hasBytesAvailable;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end


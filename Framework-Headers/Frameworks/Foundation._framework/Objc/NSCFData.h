//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableData.h>

__attribute__((visibility("hidden")))
@interface NSCFData : NSMutableData
{
    unsigned char _cfinfo[4];
    unsigned int _rc;
    long long _length;
    long long _capacity;
    struct __CFAllocator *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (BOOL)_compact;
- (id)_createDispatchData;
- (BOOL)allowsWeakReference;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)length;
- (void *)mutableBytes;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)setLength:(unsigned long long)arg1;

@end


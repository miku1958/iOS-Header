//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MDPlistBytes : NSObject
{
    unsigned long long _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    unsigned int _isBad:16;
    unsigned int _shouldDeallocate:1;
    unsigned int _isMutable:1;
    unsigned int _isMutating:1;
    unsigned int _didFinalize:1;
    unsigned int _useMalloc:1;
    struct __CFArray *_rleQueue;
    unsigned long long *_wrapperPtr;
    unsigned long long *_uidVector;
    int _uidCount;
    int _uidCapacity;
}

+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
+ (struct __MDPlistBytes *)createPlistBytes:(id)arg1;
+ (struct __MDPlistBytes *)emptyArrayPlistBytes;
+ (struct __MDPlistBytes *)emptyDictionaryPlistBytes;
+ (void)enumerateObjectsFromPlistBytes:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(BOOL)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (struct __MDPlistBytes *)nullObjectPlistBytes;
- (unsigned long long)_cfTypeID;
- (struct __CFData *)copyData;
- (struct __CFData *)copyDataWithBytesNoCopy;
- (id)createDispatchData;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)finalize;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end


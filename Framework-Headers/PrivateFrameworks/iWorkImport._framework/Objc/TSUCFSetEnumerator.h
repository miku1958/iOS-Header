//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

#import <iWorkImport/NSFastEnumeration-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSUCFSetEnumerator : NSEnumerator <NSFastEnumeration>
{
    void *mInlineObjects[16];
    const void **mObjects;
    long long mCount;
    long long mIndex;
}

- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithCFSet:(struct __CFSet *)arg1;
- (id)nextObject;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSMutableCopying-Protocol.h>

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying>
{
    struct _NSRefCountedRunArray *theList;
}

- (void)_makeNewListFrom:(struct _NSRefCountedRunArray *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 runIndex:(unsigned long long *)arg3;
- (id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long *)arg2;

@end


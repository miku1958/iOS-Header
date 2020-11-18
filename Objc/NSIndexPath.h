//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long *_indexes;
    unsigned long long _length;
    void *_reserved;
}

@property (readonly) unsigned long long length;

+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned long long)arg1;
+ (id)indexPathWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndexes:(unsigned long long *)arg1;
- (void)getIndexes:(unsigned long long *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (id)indexPathByAddingIndex:(unsigned long long)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexes:(const unsigned long long *)arg1 length:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end


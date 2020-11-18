//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding>
{
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_nodeToStringIndexMapVoidPtr;
}

+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (unsigned int)_indexForString:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setString:(id)arg1 forNode:(unsigned int)arg2;
- (id)stringForNode:(unsigned int)arg1;
- (unsigned int)uniquedStringCount;

@end


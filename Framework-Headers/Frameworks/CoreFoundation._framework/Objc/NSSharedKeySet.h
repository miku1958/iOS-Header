//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSFastEnumeration-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>
{
    char *_g;
    unsigned char _select;
    void *_rankTable;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int *_seeds;
    id *_keys;
    NSSharedKeySet *_subSharedKeySet;
    unsigned char _algorithmType;
}

@property unsigned int M; // @synthesize M=_M;
@property unsigned int factor; // @synthesize factor=_factor;
@property char *g; // @synthesize g=_g;
@property id *keys; // @synthesize keys=_keys;
@property unsigned int numKey; // @synthesize numKey=_numKey;
@property void *rankTable; // @synthesize rankTable=_rankTable;
@property unsigned int *seeds; // @synthesize seeds=_seeds;
@property unsigned char select; // @synthesize select=_select;
@property (strong) NSSharedKeySet *subSharedKeySet; // @synthesize subSharedKeySet=_subSharedKeySet;

+ (id)keySetWithKeys:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)allKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexForKey:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeys:(id *)arg1 count:(unsigned long long)arg2;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)keySetCount;
- (unsigned long long)maximumIndex;

@end

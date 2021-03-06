//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSMutableCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSString;

@interface CHTokenizedTextResultToken : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_string;
    NSIndexSet *_strokeIndexes;
    unsigned int _wordID;
    double _recognitionScore;
    double _combinedScore;
    double _alignmentScore;
    unsigned long long _properties;
    long long _substrokeCount;
}

@property (readonly, nonatomic) double alignmentScore;
@property (readonly, nonatomic) double combinedScore;
@property (readonly, nonatomic) unsigned long long properties;
@property (readonly, nonatomic) double recognitionScore;
@property (readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
@property (readonly, copy, nonatomic) NSIndexSet *strokeIndexes; // @synthesize strokeIndexes=_strokeIndexes;
@property (readonly, nonatomic) long long substrokeCount;
@property (readonly, nonatomic) unsigned int wordID; // @synthesize wordID=_wordID;

+ (BOOL)supportsSecureCoding;
+ (id)tokenWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 alignmentScore:(double)arg6 properties:(unsigned long long)arg7 substrokeCount:(long long)arg8;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 alignmentScore:(double)arg6 properties:(unsigned long long)arg7 substrokeCount:(long long)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTokenizedTextResultToken:(id)arg1;
- (BOOL)isEquivalentToToken:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end


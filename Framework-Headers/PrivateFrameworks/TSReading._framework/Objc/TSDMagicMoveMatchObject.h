//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TSDRep;

@interface TSDMagicMoveMatchObject : NSObject
{
    TSDRep *_rep;
    long long _zOrder;
    NSMutableDictionary *_attributes;
    NSString *_stringValue;
    NSString *_name;
    struct CGPoint _position;
    struct _NSRange _stringRange;
}

@property (strong, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) struct CGPoint position; // @synthesize position=_position;
@property (strong, nonatomic) TSDRep *rep; // @synthesize rep=_rep;
@property (nonatomic) struct _NSRange stringRange; // @synthesize stringRange=_stringRange;
@property (strong, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property (nonatomic) long long zOrder; // @synthesize zOrder=_zOrder;

+ (id)matchObjectWithRep:(id)arg1 position:(struct CGPoint)arg2;
+ (id)matchObjectWithTextRep:(id)arg1 position:(struct CGPoint)arg2 stringValue:(id)arg3 stringRange:(struct _NSRange)arg4;
- (BOOL)conflictsWithMatchObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRep:(id)arg1 position:(struct CGPoint)arg2 stringValue:(id)arg3 stringRange:(struct _NSRange)arg4;
- (BOOL)isEqual:(id)arg1;

@end


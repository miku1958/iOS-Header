//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@class NSString, PKInkBehavior, UIColor;

@interface PKInk : NSObject <NSCopying>
{
    NSString *_identifier;
    UIColor *_color;
    double _weight;
    PKInkBehavior *_behavior;
    unsigned long long _version;
    NSString *_variant;
}

@property (strong, nonatomic) PKInkBehavior *behavior; // @synthesize behavior=_behavior;
@property (readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *variant; // @synthesize variant=_variant;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property (nonatomic) double weight; // @synthesize weight=_weight;

+ (unsigned int)commandTypeForIdentifier:(id)arg1 wantsObjectErase:(BOOL)arg2;
+ (double)defaultOpacityForIdentifier:(id)arg1;
+ (double)defaultWeightForIdentifier:(id)arg1;
+ (id)identifierForCommandType:(unsigned int)arg1 wantsObjectErase:(BOOL)arg2;
+ (id)inkFromDictionary:(id)arg1 color:(id)arg2 identifier:(id)arg3;
+ (id)inkFromInk:(id)arg1 color:(id)arg2;
+ (id)inkFromInk:(id)arg1 withBehavior:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 variant:(id)arg3;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)hashValueForFloat:(double)arg1;
- (id)init;
- (id)initWithArchive:(const struct Ink *)arg1 serializationVersion:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 behavior:(id)arg5;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 weight:(double)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualInk:(id)arg1;
- (void)saveToArchive:(struct Ink *)arg1;

@end


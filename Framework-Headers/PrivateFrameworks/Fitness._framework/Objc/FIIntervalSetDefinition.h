//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Fitness/FIDictionaryRepresentable-Protocol.h>

@class NSArray;

@interface FIIntervalSetDefinition : NSObject <FIDictionaryRepresentable>
{
    NSArray *_intervalDefinitions;
    long long _repeatCount;
    long long _setType;
}

@property (readonly, nonatomic) unsigned long long intervalCount; // @dynamic intervalCount;
@property (readonly, nonatomic) NSArray *intervalDefinitions; // @synthesize intervalDefinitions=_intervalDefinitions;
@property (readonly, nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property (readonly, nonatomic) long long setType; // @synthesize setType=_setType;

+ (id)definitionFromDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)byAddingIntervalDefinition:(id)arg1;
- (id)byChangingRepeatCount:(long long)arg1;
- (id)byChangingSetType:(long long)arg1;
- (id)byInsertingIntervalDefinition:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)byRemovingIntervalDefinitionAtIndex:(unsigned long long)arg1;
- (id)byReplacingIntervalDefinitionAtIndex:(unsigned long long)arg1 withIntervalDefinition:(id)arg2;
- (id)dictionaryRepresentation;
- (id)initWithIntervalDefinitions:(id)arg1 repeatCount:(long long)arg2 setType:(long long)arg3;
- (id)intervalAtIndex:(unsigned long long)arg1;

@end


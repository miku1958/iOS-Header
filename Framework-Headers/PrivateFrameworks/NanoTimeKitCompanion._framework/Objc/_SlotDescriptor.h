//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface _SlotDescriptor : NSObject
{
    NSArray *_familiesRankedList;
    NSArray *_typesRankedList;
    NSIndexSet *_possibleTypes;
}

@property (readonly, nonatomic) NSArray *familiesRankedList; // @synthesize familiesRankedList=_familiesRankedList;
@property (readonly, nonatomic) NSIndexSet *possibleTypes; // @synthesize possibleTypes=_possibleTypes;
@property (readonly, nonatomic) NSArray *typesRankedList; // @synthesize typesRankedList=_typesRankedList;

+ (id)descriptorWithComplicationFamilies:(id)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3;
- (void).cxx_destruct;
- (BOOL)allowsFamily:(long long)arg1 inFace:(id)arg2;
- (BOOL)allowsType:(unsigned long long)arg1 inFace:(id)arg2;
- (void)enumerateAllowedFamiliesForFace:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)supportsFamiliesOfComplications:(id)arg1 inFace:(id)arg2;
- (BOOL)supportsType:(unsigned long long)arg1;

@end


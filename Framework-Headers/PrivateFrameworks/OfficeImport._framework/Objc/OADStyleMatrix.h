//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject
{
    NSString *mName;
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=mName;

+ (id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned long long)arg2 defaultValue:(id)arg3;
- (void).cxx_destruct;
- (void)addBgFill:(id)arg1;
- (void)addEffects:(id)arg1;
- (void)addFill:(id)arg1;
- (void)addStroke:(id)arg1;
- (id)bgFillAtIndex:(unsigned long long)arg1;
- (unsigned long long)bgFillCount;
- (id)description;
- (id)effectsAtIndex:(unsigned long long)arg1;
- (id)effectsAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (unsigned long long)effectsCount;
- (id)fillAtIndex:(unsigned long long)arg1;
- (id)fillAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (unsigned long long)fillCount;
- (id)init;
- (BOOL)isEmpty;
- (void)padArray:(id)arg1 withContentsOfArray:(id)arg2;
- (id)strokeAtIndex:(unsigned long long)arg1;
- (id)strokeAtIndex:(unsigned long long)arg1 color:(id)arg2;
- (unsigned long long)strokeCount;
- (void)validateStyleMatrix;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSCH3DTransforms : NSObject
{
    NSMutableArray *mArray;
    tvec2_3b141483 mSize;
}

@property (readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;

+ (id)transforms;
+ (id)transformsWithSize:(tvec2_3b141483)arg1;
- (id).cxx_construct;
- (long long)arrayIndex:(tvec2_3b141483)arg1;
- (void)dealloc;
- (void)setTransform:(id)arg1 atIndex:(tvec2_3b141483)arg2;
- (id)transformAtIndex:(tvec2_3b141483)arg1;

@end


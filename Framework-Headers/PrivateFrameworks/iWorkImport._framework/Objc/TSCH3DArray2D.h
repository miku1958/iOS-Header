//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCH3DArray2D : NSObject
{
    tvec2_3b141483 mSize;
    NSMutableArray *mElements;
}

@property (readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;

+ (id)array2D;
+ (id)array2DWithSize:(const tvec2_3b141483 *)arg1;
- (id).cxx_construct;
- (void)dealloc;
- (id)firstObject;
- (BOOL)hasObjectAtIndex:(const tvec2_3b141483 *)arg1;
- (id)initWithSize:(const tvec2_3b141483 *)arg1;
- (id)objectAtIndex:(const tvec2_3b141483 *)arg1;
- (void)resize:(const tvec2_3b141483 *)arg1;
- (void)setObject:(id)arg1 atIndex:(const tvec2_3b141483 *)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADShapeGeometry : NSObject
{
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (void).cxx_destruct;
- (int)adjustValueAtIndex:(unsigned int)arg1;
- (unsigned long long)adjustValueCount;
- (id)adjustValues;
- (id)description;
- (id)equivalentCustomGeometry;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)arg1;
- (id)init;
- (BOOL)isEscher;
- (void)setAdjustValue:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setIsEscher:(BOOL)arg1;
- (int)type;

@end

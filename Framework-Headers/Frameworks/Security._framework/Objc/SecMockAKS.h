//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecMockAKS : NSObject
{
}

+ (void)failNextDecryptRefKey:(id)arg1;
+ (BOOL)isLocked:(int)arg1;
+ (BOOL)isSEPDown;
+ (unsigned int)keybag_state;
+ (void)lockClassA;
+ (void)lockClassA_C;
+ (id)lockedStates;
+ (id)mutabilityQueue;
+ (id)popDecryptRefKeyFailure;
+ (void)reset;
+ (void)setKeybag_state:(unsigned int)arg1;
+ (void)trapdoor;
+ (void)unlockAllClasses;
+ (BOOL)useGenerationCount;

@end

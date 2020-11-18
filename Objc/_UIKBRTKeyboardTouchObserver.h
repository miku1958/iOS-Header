//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTKeyboardTouchObserver : NSObject
{
    int _homeRowOffsetIndex;
    NSArray *_rowOffsets;
    NSArray *_rowXEdges;
    NSArray *_rowYEdgesLeft;
    NSArray *_rowYEdgesRight;
    struct CGPoint _fCenter;
    struct CGPoint _jCenter;
    struct CGSize _keySize;
}

@property (nonatomic) struct CGPoint fCenter; // @synthesize fCenter=_fCenter;
@property (nonatomic) int homeRowOffsetIndex; // @synthesize homeRowOffsetIndex=_homeRowOffsetIndex;
@property (nonatomic) struct CGPoint jCenter; // @synthesize jCenter=_jCenter;
@property (nonatomic) struct CGSize keySize; // @synthesize keySize=_keySize;
@property (strong, nonatomic) NSArray *rowOffsets; // @synthesize rowOffsets=_rowOffsets;
@property (strong, nonatomic) NSArray *rowXEdges; // @synthesize rowXEdges=_rowXEdges;
@property (strong, nonatomic) NSArray *rowYEdgesLeft; // @synthesize rowYEdgesLeft=_rowYEdgesLeft;
@property (strong, nonatomic) NSArray *rowYEdgesRight; // @synthesize rowYEdgesRight=_rowYEdgesRight;

- (void).cxx_destruct;
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withIdentifier:(id)arg3;
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;
- (void)removeTouchWithIdentifier:(id)arg1;
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(BOOL)arg2;
- (void)reset;
- (void)updateWithFCenter:(struct CGPoint)arg1 jCenter:(struct CGPoint)arg2 keySize:(struct CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBFieldOptions : TRIPBMessage
{
}

@property (nonatomic) int ctype; // @dynamic ctype;
@property (nonatomic) BOOL deprecated; // @dynamic deprecated;
@property (nonatomic) BOOL hasCtype; // @dynamic hasCtype;
@property (nonatomic) BOOL hasDeprecated; // @dynamic hasDeprecated;
@property (nonatomic) BOOL hasJstype; // @dynamic hasJstype;
@property (nonatomic) BOOL hasLazy; // @dynamic hasLazy;
@property (nonatomic) BOOL hasPacked; // @dynamic hasPacked;
@property (nonatomic) BOOL hasWeak; // @dynamic hasWeak;
@property (nonatomic) int jstype; // @dynamic jstype;
@property (nonatomic) BOOL lazy; // @dynamic lazy;
@property (nonatomic) BOOL packed; // @dynamic packed;
@property (strong, nonatomic) NSMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count; // @dynamic uninterpretedOptionArray_Count;
@property (nonatomic) BOOL weak; // @dynamic weak;

+ (id)descriptor;

@end

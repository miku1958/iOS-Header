//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBEnumOptions : TRIPBMessage
{
}

@property (nonatomic) BOOL allowAlias; // @dynamic allowAlias;
@property (nonatomic) BOOL deprecated; // @dynamic deprecated;
@property (nonatomic) BOOL hasAllowAlias; // @dynamic hasAllowAlias;
@property (nonatomic) BOOL hasDeprecated; // @dynamic hasDeprecated;
@property (strong, nonatomic) NSMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count; // @dynamic uninterpretedOptionArray_Count;

+ (id)descriptor;

@end

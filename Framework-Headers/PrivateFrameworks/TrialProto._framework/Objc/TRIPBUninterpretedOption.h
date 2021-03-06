//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSData, NSMutableArray, NSString;

@interface TRIPBUninterpretedOption : TRIPBMessage
{
}

@property (copy, nonatomic) NSString *aggregateValue; // @dynamic aggregateValue;
@property (nonatomic) double doubleValue; // @dynamic doubleValue;
@property (nonatomic) BOOL hasAggregateValue; // @dynamic hasAggregateValue;
@property (nonatomic) BOOL hasDoubleValue; // @dynamic hasDoubleValue;
@property (nonatomic) BOOL hasIdentifierValue; // @dynamic hasIdentifierValue;
@property (nonatomic) BOOL hasNegativeIntValue; // @dynamic hasNegativeIntValue;
@property (nonatomic) BOOL hasPositiveIntValue; // @dynamic hasPositiveIntValue;
@property (nonatomic) BOOL hasStringValue; // @dynamic hasStringValue;
@property (copy, nonatomic) NSString *identifierValue; // @dynamic identifierValue;
@property (strong, nonatomic) NSMutableArray *nameArray; // @dynamic nameArray;
@property (readonly, nonatomic) unsigned long long nameArray_Count; // @dynamic nameArray_Count;
@property (nonatomic) long long negativeIntValue; // @dynamic negativeIntValue;
@property (nonatomic) unsigned long long positiveIntValue; // @dynamic positiveIntValue;
@property (copy, nonatomic) NSData *stringValue; // @dynamic stringValue;

+ (id)descriptor;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBInt32Array;

@interface TRIPBGeneratedCodeInfo_Annotation : TRIPBMessage
{
}

@property (nonatomic) int begin; // @dynamic begin;
@property (nonatomic) int end; // @dynamic end;
@property (nonatomic) BOOL hasBegin; // @dynamic hasBegin;
@property (nonatomic) BOOL hasEnd; // @dynamic hasEnd;
@property (nonatomic) BOOL hasSourceFile; // @dynamic hasSourceFile;
@property (strong, nonatomic) TRIPBInt32Array *pathArray; // @dynamic pathArray;
@property (readonly, nonatomic) unsigned long long pathArray_Count; // @dynamic pathArray_Count;
@property (copy, nonatomic) NSString *sourceFile; // @dynamic sourceFile;

+ (id)descriptor;

@end


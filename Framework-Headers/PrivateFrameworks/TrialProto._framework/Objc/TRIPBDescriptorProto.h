//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBMessageOptions;

@interface TRIPBDescriptorProto : TRIPBMessage
{
}

@property (strong, nonatomic) NSMutableArray *enumTypeArray; // @dynamic enumTypeArray;
@property (readonly, nonatomic) unsigned long long enumTypeArray_Count; // @dynamic enumTypeArray_Count;
@property (strong, nonatomic) NSMutableArray *extensionArray; // @dynamic extensionArray;
@property (readonly, nonatomic) unsigned long long extensionArray_Count; // @dynamic extensionArray_Count;
@property (strong, nonatomic) NSMutableArray *extensionRangeArray; // @dynamic extensionRangeArray;
@property (readonly, nonatomic) unsigned long long extensionRangeArray_Count; // @dynamic extensionRangeArray_Count;
@property (strong, nonatomic) NSMutableArray *fieldArray; // @dynamic fieldArray;
@property (readonly, nonatomic) unsigned long long fieldArray_Count; // @dynamic fieldArray_Count;
@property (nonatomic) BOOL hasName; // @dynamic hasName;
@property (nonatomic) BOOL hasOptions; // @dynamic hasOptions;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSMutableArray *nestedTypeArray; // @dynamic nestedTypeArray;
@property (readonly, nonatomic) unsigned long long nestedTypeArray_Count; // @dynamic nestedTypeArray_Count;
@property (strong, nonatomic) NSMutableArray *oneofDeclArray; // @dynamic oneofDeclArray;
@property (readonly, nonatomic) unsigned long long oneofDeclArray_Count; // @dynamic oneofDeclArray_Count;
@property (strong, nonatomic) TRIPBMessageOptions *options; // @dynamic options;
@property (strong, nonatomic) NSMutableArray *reservedNameArray; // @dynamic reservedNameArray;
@property (readonly, nonatomic) unsigned long long reservedNameArray_Count; // @dynamic reservedNameArray_Count;
@property (strong, nonatomic) NSMutableArray *reservedRangeArray; // @dynamic reservedRangeArray;
@property (readonly, nonatomic) unsigned long long reservedRangeArray_Count; // @dynamic reservedRangeArray_Count;

+ (id)descriptor;

@end

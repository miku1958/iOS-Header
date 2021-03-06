//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface WFPBRunRequestResponse : PBCodable <NSCopying>
{
    NSData *_errorData;
    NSMutableArray *_outputDatas;
    NSString *_runRequestIdentifier;
    NSMutableArray *_variablesDatas;
}

@property (strong, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (strong, nonatomic) NSMutableArray *outputDatas; // @synthesize outputDatas=_outputDatas;
@property (strong, nonatomic) NSString *runRequestIdentifier; // @synthesize runRequestIdentifier=_runRequestIdentifier;
@property (strong, nonatomic) NSMutableArray *variablesDatas; // @synthesize variablesDatas=_variablesDatas;

+ (Class)outputDataType;
+ (Class)variablesDataType;
- (void).cxx_destruct;
- (void)addOutputData:(id)arg1;
- (void)addVariablesData:(id)arg1;
- (void)clearOutputDatas;
- (void)clearVariablesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDatasCount;
- (BOOL)readFrom:(id)arg1;
- (id)variablesDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)variablesDatasCount;
- (void)writeTo:(id)arg1;

@end


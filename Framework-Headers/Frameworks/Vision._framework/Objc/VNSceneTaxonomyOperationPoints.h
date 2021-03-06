//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNOperationPoints.h>

@class NSMapTable, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VNSceneTaxonomyOperationPoints : VNOperationPoints
{
    NSString *_frameworkOperationPointsIdentifier;
    NSURL *_nonframeworkDataURL;
    NSMapTable *_labelToOperationPointsDataIndexMap;
    CDStruct_47a8b21a *_operationPointsDataArray;
    unsigned long long _cachedHashValue;
}

+ (id)URLForIdentifier:(id)arg1 error:(id *)arg2;
+ (id)loadFromIdentifier:(id)arg1 error:(id *)arg2;
+ (id)loadFromPropertyList:(id)arg1 error:(id *)arg2;
+ (id)loadFromURL:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_allClassificationIdentifiers;
- (const CDStruct_47a8b21a *)_operationPointsDataForClassificationIdentifier:(id)arg1 error:(id *)arg2;
- (id)_propertyListRepresentation;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;
- (BOOL)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;
- (BOOL)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (BOOL)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabelToOperationPointsDataIndexMap:(id)arg1 operationPointsDataArray:(CDStruct_47a8b21a *)arg2;
- (BOOL)isEqual:(id)arg1;

@end


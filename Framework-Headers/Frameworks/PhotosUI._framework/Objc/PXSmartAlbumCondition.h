//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PLSingleQuery, PXLabeledValue;
@protocol PXSmartAlbumConditionDelegate, PXSmartAlbumEditingContext;

@interface PXSmartAlbumCondition : NSObject
{
    NSArray *_comparatorValues;
    long long _conditionType;
    id<PXSmartAlbumEditingContext> _editingContext;
    PLSingleQuery *_singleQuery;
    id<PXSmartAlbumConditionDelegate> _delegate;
}

@property (readonly, nonatomic) long long comparatorParameterType;
@property (strong, nonatomic) PXLabeledValue *comparatorValue;
@property (readonly, nonatomic) NSArray *comparatorValues;
@property (readonly, nonatomic) long long conditionType; // @synthesize conditionType=_conditionType;
@property (weak, nonatomic) id<PXSmartAlbumConditionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) id<PXSmartAlbumEditingContext> editingContext; // @synthesize editingContext=_editingContext;
@property (readonly, nonatomic) PLSingleQuery *singleQuery; // @synthesize singleQuery=_singleQuery;

+ (id)_conditionWithSingleQuery:(id)arg1 editingContext:(id)arg2;
+ (id)conditionWithConditionType:(long long)arg1 editingContext:(id)arg2;
+ (id)conditionsForQuery:(id)arg1 editingContext:(id)arg2 error:(id *)arg3;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;
- (void).cxx_destruct;
- (int)_comparatorType;
- (id)_initWithConditionType:(long long)arg1 singleQuery:(id)arg2 editingContext:(id)arg3;
- (long long)comparatorMode;
- (id)init;

@end


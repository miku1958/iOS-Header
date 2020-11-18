//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKCOUpdateOperation.h>

#import <iWorkImport/TSKCOIdOperation-Protocol.h>
#import <iWorkImport/TSKCOTransforming-Protocol.h>
#import <iWorkImport/TSKCOUpdateIdOperationSubset-Protocol.h>

@class TSKCOIdAddress;

__attribute__((visibility("hidden")))
@interface TSKCOUpdateIdOperation : TSKCOUpdateOperation <TSKCOIdOperation, TSKCOUpdateIdOperationSubset, TSKCOTransforming>
{
    TSKCOIdAddress *_address;
}

@property (readonly, nonatomic) TSKCOIdAddress *address; // @synthesize address=_address;

+ (id)operationWithIdAddress:(id)arg1 propertyName:(id)arg2;
- (void).cxx_destruct;
- (id)initWithIdAddress:(id)arg1 propertyName:(id)arg2;
- (id)initWithIdAddress:(id)arg1 propertyName:(id)arg2 noop:(BOOL)arg3;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (id)operationWithNewNoop:(BOOL)arg1;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)toString;
- (id)toUpdateIdOperation;
- (id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)ut_transformByTransformer:(id)arg1;

@end


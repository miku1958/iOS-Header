//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShadersGraph/NSCopying-Protocol.h>

@class MPSGraphOperation, NSArray, NSString;

@interface MPSGraphTensor : NSObject <NSCopying>
{
    struct Value _value;
    MPSGraphOperation *_operation;
    unsigned int _dataType;
    unsigned long long _index;
    NSArray *_shape;
    NSString *_name;
}

@property (readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property (readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, weak, nonatomic) MPSGraphOperation *operation; // @synthesize operation=_operation;
@property (readonly, copy, nonatomic) NSArray *shape; // @synthesize shape=_shape;
@property (readonly, nonatomic) struct Value value; // @synthesize value=_value;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)initTensorWithOperation:(id)arg1 value:(struct Value)arg2;
- (id)initTensorWithOperation:(id)arg1 value:(struct Value)arg2 name:(id)arg3;
- (id)initTensorWithValue:(struct Value)arg1;

@end


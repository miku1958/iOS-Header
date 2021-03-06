//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBModelField, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultColumnTuple : HMFObject
{
    int _offset;
    NSString *_name;
    HMBModelField *_modelField;
}

@property (readonly, nonatomic) HMBModelField *modelField; // @synthesize modelField=_modelField;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) int offset; // @synthesize offset=_offset;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3;

@end


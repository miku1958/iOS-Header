//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTIndexingChunk : NSObject
{
    UUIDData_5fbc143e _tableUID;
    vector_8f941582 _wordFragmentsList;
    vector_aef86211 _headerCoords;
}

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addHeaderWordFragments:(const vector_0c920a62 *)arg1 atCoord:(const UUIDCoord_697ad09a *)arg2;
- (const vector_aef86211 *)headerCoords;
- (id)initWithTableUID:(const UUIDData_5fbc143e *)arg1;
- (const vector_8f941582 *)wordFragmentsList;

@end


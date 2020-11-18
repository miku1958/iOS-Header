//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEOConfigDBOperationBase.h>

#import <GeoServices/_GEOConfigDBOperation-Protocol.h>

@class NSString, _GEOConfigDB;

__attribute__((visibility("hidden")))
@interface _GEOConfigDBUpdateOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation>
{
    _GEOConfigDB *_configDB;
    long long _rowId;
    NSString *_type;
    NSString *_value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init:(id)arg1 rowId:(long long)arg2 type:(id)arg3 value:(id)arg4;
- (BOOL)performOperation;

@end

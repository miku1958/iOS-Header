//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_data;

@interface TSUDispatchData : NSObject
{
    NSObject<OS_dispatch_data> *_data;
    unsigned long long _size;
    unsigned long long _maxFragmentsCount;
    NSObject<OS_dispatch_data> *_fragmentedData;
    NSObject<OS_dispatch_data> *_defragmentedData;
    unsigned long long _fragmentsCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *defragmentedData; // @synthesize defragmentedData=_defragmentedData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *fragmentedData; // @synthesize fragmentedData=_fragmentedData;
@property (readonly, nonatomic) unsigned long long fragmentsCount; // @synthesize fragmentsCount=_fragmentsCount;
@property (nonatomic) unsigned long long maxFragmentsCount; // @synthesize maxFragmentsCount=_maxFragmentsCount;
@property (readonly, nonatomic) unsigned long long size; // @synthesize size=_size;

- (void).cxx_destruct;
- (void)append:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1;

@end


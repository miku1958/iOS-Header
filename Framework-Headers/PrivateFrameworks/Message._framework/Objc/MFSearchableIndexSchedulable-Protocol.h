//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@class NSString;

@protocol MFSearchableIndexSchedulable <NSObject>

@property (nonatomic, getter=isDataSourceIndexingPermitted) BOOL dataSourceIndexingPermitted;
@property (readonly, copy, nonatomic) NSString *indexName;
@property (readonly, nonatomic) unsigned long long pendingIndexItemsCount;

@end


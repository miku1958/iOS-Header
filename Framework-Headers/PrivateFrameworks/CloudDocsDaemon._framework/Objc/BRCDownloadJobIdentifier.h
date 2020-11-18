//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobIdentifying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCDownloadJobIdentifier : NSObject <BRCJobIdentifying>
{
    int _kind;
    unsigned long long _itemDBRowID;
    NSString *_etag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
@property (readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)columns;
- (id)columnsValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDBRowID:(unsigned long long)arg1 etag:(id)arg2 kind:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDownloadJobIdentifier:(id)arg1;
- (id)jobsDescription;
- (id)matchingJobsWhereSQLClause;

@end

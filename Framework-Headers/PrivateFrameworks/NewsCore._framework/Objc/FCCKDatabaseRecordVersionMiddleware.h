//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseOperationMiddleware-Protocol.h>
#import <NewsCore/FCCKDatabaseRecordMiddleware-Protocol.h>

@class NSString;

@interface FCCKDatabaseRecordVersionMiddleware : NSObject <FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)clientRecord:(id)arg1 inDatabase:(id)arg2;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)serverRecord:(id)arg1 inDatabase:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class CKDatabaseOperation, FCCKPrivateDatabase;

@protocol FCCKDatabaseOperationMiddleware <NSObject>
- (long long)database:(FCCKPrivateDatabase *)arg1 willEnqueueOperation:(CKDatabaseOperation *)arg2;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveSupport/NSObject-Protocol.h>

@class NSError, _PASSqliteDatabase;

@protocol _PASSqliteErrorHandlerProtocol <NSObject>
- (BOOL)handleSqliteError:(int)arg1 error:(NSError *)arg2 onError:(struct _PASDBIterAction_ (^)(NSError *))arg3 db:(_PASSqliteDatabase *)arg4;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/NSObject-Protocol.h>

@class ML3DatabaseConnection, ML3DatabaseConnectionPool;

@protocol ML3DatabaseConnectionPoolDelegate <NSObject>

@optional
- (void)connectionPool:(ML3DatabaseConnectionPool *)arg1 createdNewConnection:(ML3DatabaseConnection *)arg2;
@end


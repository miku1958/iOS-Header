//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <prequelite/NSObject-Protocol.h>

@class NSData;

@protocol PQLInjecting <NSObject>

@property (readonly, nonatomic) NSData *sql;

- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;

@optional
- (id)bindValuesToKeepAlive;
@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryTransaction : NSObject
{
    SSSQLiteDatabase *_database;
}

@property (readonly, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;

- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end


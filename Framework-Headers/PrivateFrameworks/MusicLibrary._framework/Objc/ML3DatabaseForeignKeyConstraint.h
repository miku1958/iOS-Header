//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseTable, NSArray;

@interface ML3DatabaseForeignKeyConstraint : NSObject
{
    ML3DatabaseTable *_foreignTable;
    NSArray *_localColumns;
    NSArray *_foreignColumns;
}

@property (readonly, nonatomic) NSArray *foreignColumns; // @synthesize foreignColumns=_foreignColumns;
@property (readonly, nonatomic) ML3DatabaseTable *foreignTable; // @synthesize foreignTable=_foreignTable;
@property (readonly, nonatomic) NSArray *localColumns; // @synthesize localColumns=_localColumns;

- (void).cxx_destruct;
- (id)_foreignKeyClauseSQL;
- (id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3;

@end

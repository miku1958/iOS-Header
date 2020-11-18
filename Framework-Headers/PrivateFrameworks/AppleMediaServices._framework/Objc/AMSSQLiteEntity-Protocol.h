//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;

@protocol AMSSQLiteEntity <NSObject>
+ (NSString *)databaseTable;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseColumnForProperty:(NSString *)arg1;
+ (NSString *)foreignDatabaseTableForProperty:(NSString *)arg1;
+ (NSSet *)foreignDatabaseTablesToDelete;
+ (NSString *)foreignKeyColumnForTable:(NSString *)arg1;
+ (NSString *)joinClauseForProperty:(NSString *)arg1;
- (BOOL)deleteFromDatabase;
- (NSDictionary *)getValuesForProperties:(NSArray *)arg1;
- (id)objectForKeyedSubscript:(NSString *)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(NSString *)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (BOOL)setValuesWithDictionary:(NSDictionary *)arg1;
- (id)valueForProperty:(NSString *)arg1;
@end


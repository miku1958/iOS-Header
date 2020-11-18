//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PMLTrainingDatabaseMigrations : NSObject
{
    NSDictionary *_migrations;
}

@property (readonly, nonatomic) unsigned long long maxVersion; // @dynamic maxVersion;
@property (readonly, nonatomic) NSDictionary *migrations; // @synthesize migrations=_migrations;

+ (id)mockMigrationsByAddingQueries:(id)arg1;
+ (id)skipFromZeroSchema:(unsigned long long *)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMigrations:(id)arg1;

@end


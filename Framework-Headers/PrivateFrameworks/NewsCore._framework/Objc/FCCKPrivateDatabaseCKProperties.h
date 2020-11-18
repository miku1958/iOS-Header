//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDatabase, NSArray;

@interface FCCKPrivateDatabaseCKProperties : NSObject
{
    CKDatabase *_database;
    CKDatabase *_databaseWithZoneWidePCS;
    CKDatabase *_secureDatabase;
    NSArray *_containers;
}

@property (strong, nonatomic) NSArray *containers; // @synthesize containers=_containers;
@property (readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property (readonly, nonatomic) CKDatabase *databaseWithZoneWidePCS; // @synthesize databaseWithZoneWidePCS=_databaseWithZoneWidePCS;
@property (readonly, nonatomic) CKDatabase *secureDatabase; // @synthesize secureDatabase=_secureDatabase;

- (void).cxx_destruct;
- (id)initWithContainers:(id)arg1 database:(id)arg2 databaseWithZoneWidePCS:(id)arg3 secureDatabase:(id)arg4;

@end

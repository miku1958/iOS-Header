//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SSBDatabaseStatus : NSObject
{
    struct DatabaseStatus _databaseStatus;
}

@property (readonly, nonatomic) unsigned long long databaseCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)hashCountOfDatabaseAtIndex:(unsigned long long)arg1;
- (id)initWithDatabaseStatus:(struct DatabaseStatus)arg1;
- (id)lastUpdateTimeOfDatabaseAtIndex:(unsigned long long)arg1;
- (id)nameOfDatabaseAtIndex:(unsigned long long)arg1;
- (id)nextPollingTimeOfDatabaseAtIndex:(unsigned long long)arg1;
- (unsigned long long)sizeOfDatabaseAtIndex:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBMigrationResult : NSObject
{
    long long _errorCode;
    long long _dbVersion;
}

@property (nonatomic) long long dbVersion; // @synthesize dbVersion=_dbVersion;
@property (nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;

- (id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2;

@end


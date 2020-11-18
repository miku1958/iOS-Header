//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _readOnly;
    NSString *_databasePath;
    long long _cacheSize;
    NSString *_protectionType;
}

@property (nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property (copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property (copy, nonatomic) NSString *protectionType; // @synthesize protectionType=_protectionType;
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)applyToDatabase:(struct sqlite3 *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabasePath:(id)arg1;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;

@end


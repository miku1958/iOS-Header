//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _MFLibrarySearchableIndexClientState : NSObject
{
    NSNumber *_transactionValue;
    long long _transaction;
    NSDate *_transactionDate;
    NSString *_systemBuildVersion;
}

@property (copy, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property (nonatomic) long long transaction; // @synthesize transaction=_transaction;
@property (strong, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property (readonly, nonatomic) NSNumber *transactionValue;

+ (id)clientState;
+ (id)clientStateFromData:(id)arg1;
- (id)archiveRepresentation;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end


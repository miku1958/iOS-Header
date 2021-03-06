//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface ML3ClientImportResult : NSObject <NSSecureCoding>
{
    BOOL _success;
    NSDictionary *_resultingDatabasePersistentIDs;
}

@property (readonly, copy, nonatomic) NSDictionary *resultingDatabasePersistentIDs; // @synthesize resultingDatabasePersistentIDs=_resultingDatabasePersistentIDs;
@property (readonly, nonatomic) BOOL success; // @synthesize success=_success;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(BOOL)arg1 resultingDatabasePersistentIDs:(id)arg2;

@end


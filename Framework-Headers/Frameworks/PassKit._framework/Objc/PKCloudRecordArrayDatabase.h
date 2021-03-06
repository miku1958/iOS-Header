//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSMutableDictionary *_cloudRecordByDatabaseZone;
}

@property (strong, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone; // @synthesize cloudRecordByDatabaseZone=_cloudRecordByDatabaseZone;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addCloudRecord:(id)arg1;
- (id)allItems;
- (id)allObjects;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)arg1;
- (void)applyCloudRecordDatabase:(id)arg1;
- (long long)count;
- (id)countByZoneID;
- (id)description;
- (id)descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, NSDate, NSString;

@interface FCReadingListEntry : NSObject
{
    NSString *_identifier;
    NSString *_articleID;
    NSDate *_dateAdded;
    unsigned long long _origin;
}

@property (readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property (readonly, nonatomic) CKRecord *asCKRecord;
@property (readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long origin; // @synthesize origin=_origin;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 articleID:(id)arg2 dateAdded:(id)arg3 origin:(unsigned long long)arg4;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;

@end


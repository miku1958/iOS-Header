//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, OFMediaMetadataDatabaseCache;

@interface OFMediaMetadataDatabaseCacheEntry : NSObject
{
    OFMediaMetadataDatabaseCache *_context;
    long long _uniqueID;
    NSString *_identifier;
    NSDate *_creationDate;
    NSString *_name;
    BOOL _isFault;
    BOOL _isDirty;
}

@property (strong) OFMediaMetadataDatabaseCache *context; // @synthesize context=_context;
@property (strong) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (copy) NSString *identifier; // @synthesize identifier=_identifier;
@property BOOL isDirty; // @synthesize isDirty=_isDirty;
@property BOOL isFault; // @synthesize isFault=_isFault;
@property (copy) NSString *name; // @synthesize name=_name;
@property long long uniqueID; // @synthesize uniqueID=_uniqueID;

- (void)cleanup;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1 andStatement:(struct sqlite3_stmt *)arg2;
- (void)save;
- (void)update;
- (void)updateWithStatement:(struct sqlite3_stmt *)arg1;

@end


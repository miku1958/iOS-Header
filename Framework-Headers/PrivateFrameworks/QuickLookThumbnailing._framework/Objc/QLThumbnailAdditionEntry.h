//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>
#import <QuickLookThumbnailing/PQLResultSetInitializer-Protocol.h>

@class NSData, NSDate, NSString, NSURL;

@interface QLThumbnailAdditionEntry : NSObject <PQLResultSetInitializer, NSSecureCoding>
{
    unsigned long long _documentID;
    long long _size;
    NSDate *_lastHitDate;
    NSURL *_lastSeenURL;
    NSData *_vol_uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long documentID; // @synthesize documentID=_documentID;
@property (readonly) unsigned long long hash;
@property (strong) NSDate *lastHitDate; // @synthesize lastHitDate=_lastHitDate;
@property (strong) NSURL *lastSeenURL; // @synthesize lastSeenURL=_lastSeenURL;
@property long long size; // @synthesize size=_size;
@property (readonly) Class superclass;
@property (readonly) NSString *unparsedVolumeUUID;
@property (strong) NSData *vol_uuid; // @synthesize vol_uuid=_vol_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;

@end

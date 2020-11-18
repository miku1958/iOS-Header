//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSFastEnumeration-Protocol.h>

@class NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray *_uuids;
}

@property (readonly, nonatomic) NSString *UUIDPathString;
@property (readonly, nonatomic) NSUUID *lastUUID;
@property (readonly, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;

+ (id)lastUUIDFromUUIDPathString:(id)arg1;
- (void).cxx_destruct;
- (id)UUIDPathByAppendingUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithMessage:(const struct UUIDPath *)arg1;
- (id)initWithUUIDPathString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)saveToMessage:(struct UUIDPath *)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUUID.h>

__attribute__((visibility("hidden")))
@interface __NSConcreteUUID : NSUUID
{
    unsigned char _uuidBytes[16];
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)UUIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)getUUIDBytes:(unsigned char [16])arg1;
- (id)init;
- (id)initWithUUIDBytes:(unsigned char [16])arg1;
- (id)initWithUUIDString:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


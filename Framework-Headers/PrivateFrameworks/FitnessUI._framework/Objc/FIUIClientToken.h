//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/NSCopying-Protocol.h>

@class NSUUID;

@interface FIUIClientToken : NSObject <NSCopying>
{
    NSUUID *_UUID;
}

- (void).cxx_destruct;
- (id)_initWithUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end


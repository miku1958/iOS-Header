//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NSCopying-Protocol.h>

@class NSString;

@interface NFKey : NSObject <NSCopying>
{
    unsigned long long _address;
    NSString *_name;
    id _type;
}

@property (readonly, nonatomic) unsigned long long address; // @synthesize address=_address;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) id type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)copyWithName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAddress:(unsigned long long)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithAddressOfType:(id)arg1 name:(id)arg2;
- (id)initWithTypeName:(id)arg1 name:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end


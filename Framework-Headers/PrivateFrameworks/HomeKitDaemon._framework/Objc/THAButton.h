//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface THAButton : NSObject
{
    unsigned char _identifier;
    unsigned long long _type;
}

@property (nonatomic) unsigned char identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1 identifier:(unsigned char)arg2;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject
{
    id _attr;
    id _value;
    unsigned long long _count;
    void *_reserved;
}

@property (readonly, copy) NSString *attribute;
@property (readonly) unsigned long long count;
@property (readonly, strong) id value;

- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject
{
    NSDictionary *_attributes;
}

- (id)UUIDStringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)getUInt16:(unsigned short *)arg1 forKey:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (id)stringForKey:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSLazyPropertyList.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList
{
    NSDictionary *_plist;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_getPropertyList:(id *)arg1;
- (BOOL)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyList:(id)arg1;

@end


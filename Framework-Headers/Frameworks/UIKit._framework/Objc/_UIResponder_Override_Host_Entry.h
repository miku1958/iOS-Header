//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override_Host_Entry : NSObject
{
    UIResponder *_overridden;
    long long _type;
}

@property (readonly, weak) UIResponder *overridden; // @synthesize overridden=_overridden;
@property (readonly) long long type; // @synthesize type=_type;

+ (id)entryWithResponder:(id)arg1 forType:(long long)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;

@end

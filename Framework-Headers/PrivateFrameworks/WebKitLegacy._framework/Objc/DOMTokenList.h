//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMTokenList : DOMObject
{
}

@property (readonly) unsigned int length;
@property (copy) NSString *value;

- (BOOL)contains:(id)arg1;
- (void)dealloc;
- (id)item:(unsigned int)arg1;
- (BOOL)toggle:(id)arg1 force:(BOOL)arg2;

@end


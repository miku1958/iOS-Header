//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter;

@interface MCUIFormatterVendor : NSObject
{
    NSNumberFormatter *_numberFormatter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)numberFormatter;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSSet;

@interface SGReverseTemplatesJSDataDetectors : NSObject
{
    NSMutableDictionary *_scanners;
    NSSet *_availLocales;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_naiveDateFormatter;
    NSDateFormatter *_noTimeFormatter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)runDataDetectors:(id)arg1 locale:(id)arg2 epoch:(double)arg3;

@end

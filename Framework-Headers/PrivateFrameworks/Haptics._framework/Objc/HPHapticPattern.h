//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HPHapticPattern : NSObject
{
    NSArray *_events;
}

@property (readonly) NSArray *events; // @synthesize events=_events;

- (void).cxx_destruct;
- (id)eventListFromDictionary:(id)arg1 error:(id *)arg2;
- (id)eventListFromEvents:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id *)arg3;

@end

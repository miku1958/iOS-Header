//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCFSEvent : NSObject
{
    NSString *_path;
    unsigned int _flags;
    unsigned long long _eventID;
}

@property (readonly, nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (strong, nonatomic) NSString *path; // @synthesize path=_path;

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 flags:(unsigned int)arg2 eventID:(unsigned long long)arg3;

@end


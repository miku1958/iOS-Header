//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKMatchEvent : NSObject
{
    BOOL _result;
    unsigned long long _timeStamp;
}

@property (nonatomic) BOOL result; // @synthesize result=_result;
@property (nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;

+ (id)matchEventWithDictionary:(id)arg1 error:(id *)arg2;

@end


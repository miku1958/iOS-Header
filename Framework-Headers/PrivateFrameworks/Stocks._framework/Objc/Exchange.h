//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface Exchange : NSObject
{
    NSString *_name;
    NSDate *_lastCloseDate;
    NSDate *_nextOpenDate;
    long long _status;
    double _streamInterval;
    double _lastUpdateTime;
}

@property (strong, nonatomic) NSDate *lastCloseDate; // @synthesize lastCloseDate=_lastCloseDate;
@property (readonly, nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSDate *nextOpenDate; // @synthesize nextOpenDate=_nextOpenDate;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (nonatomic) double streamInterval; // @synthesize streamInterval=_streamInterval;

+ (id)formattedExchangeNameForName:(id)arg1;
- (void).cxx_destruct;
- (void)_updateWithDictionary:(id)arg1 newUpdate:(BOOL)arg2;
- (id)archiveDictionary;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)marketIsAfterHours;
- (BOOL)marketIsOpen;
- (void)updateWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface WFSevereWeatherEvent : NSObject
{
    NSString *_identifier;
    NSString *_areaName;
    NSString *_eventDescription;
    NSString *_source;
    NSDate *_expirationDate;
    NSURL *_URL;
    unsigned long long _importance;
}

@property (readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, copy, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property (readonly, copy, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long importance; // @synthesize importance=_importance;
@property (readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 areaName:(id)arg2 eventDescription:(id)arg3 source:(id)arg4 expirationDate:(id)arg5 URL:(id)arg6 importance:(unsigned long long)arg7;

@end

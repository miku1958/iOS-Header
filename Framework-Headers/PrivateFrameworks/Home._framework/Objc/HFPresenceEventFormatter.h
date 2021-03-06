//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class HMHome;

@interface HFPresenceEventFormatter : NSFormatter
{
    unsigned long long _nameType;
    unsigned long long _style;
    HMHome *_home;
}

@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (nonatomic) unsigned long long nameType; // @synthesize nameType=_nameType;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (id)_formattedListForSelectedUsers:(id)arg1 inHome:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)stringForPresenceEvent:(id)arg1;
- (id)stringForPresenceEventBuilder:(id)arg1;
- (id)stringForPresenceEventBuilder:(id)arg1 actionsDescription:(id)arg2;

@end


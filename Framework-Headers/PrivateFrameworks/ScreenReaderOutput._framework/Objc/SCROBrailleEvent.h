//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCROBrailleEvent : NSObject
{
    int _type;
    id _data;
    id _data2;
    id _data3;
    BOOL _shouldDisplay;
}

@property (nonatomic) BOOL shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;

+ (id)eventWithType:(int)arg1 data:(id)arg2;
+ (id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (void).cxx_destruct;
- (id)data;
- (id)data2;
- (id)data3;
- (id)description;
- (id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (int)type;

@end

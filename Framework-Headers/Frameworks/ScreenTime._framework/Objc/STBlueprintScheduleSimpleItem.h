//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>

@class NSDateComponents;

@interface STBlueprintScheduleSimpleItem : NSObject <NSCopying>
{
    NSDateComponents *_startTime;
    NSDateComponents *_endTime;
}

@property (strong, nonatomic) NSDateComponents *endTime; // @synthesize endTime=_endTime;
@property (strong, nonatomic) NSDateComponents *startTime; // @synthesize startTime=_startTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


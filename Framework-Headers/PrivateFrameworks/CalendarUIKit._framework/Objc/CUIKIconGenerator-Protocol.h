//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUIKit/NSObject-Protocol.h>

@class NSCalendar, NSDateComponents;

@protocol CUIKIconGenerator <NSObject>
- (struct CGImage *)iconImageWithDateComponents:(NSDateComponents *)arg1 calendar:(NSCalendar *)arg2 format:(long long)arg3 size:(struct CGSize)arg4 scale:(double)arg5;
@end

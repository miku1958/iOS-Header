//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent
{
}

@property (readonly) BOOL horizontalOverflow;
@property (readonly) unsigned short orient;
@property (readonly) BOOL verticalOverflow;

- (void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(BOOL)arg2 verticalOverflow:(BOOL)arg3;

@end

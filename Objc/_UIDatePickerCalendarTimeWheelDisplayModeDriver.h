//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeWheelDisplayModeDriver : NSObject <UIGestureRecognizerDelegate>
{
    unsigned long long _displayMode;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _invalidationRequestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CDUnknownBlockType invalidationRequestHandler; // @synthesize invalidationRequestHandler=_invalidationRequestHandler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

- (void).cxx_destruct;
- (id)initWithInvalidationRequestHandler:(CDUnknownBlockType)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextDragFinishState-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITextDragFinishState : NSObject <UITextDragFinishState>
{
    BOOL _dragTearoffOccured;
    struct CGPoint _location;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragTearoffOccured; // @synthesize dragTearoffOccured=_dragTearoffOccured;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint location; // @synthesize location=_location;
@property (readonly) Class superclass;


@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMObject.h>

@protocol DOMEventTarget;

@interface DOMTouch : DOMObject
{
}

@property (readonly) int clientX;
@property (readonly) int clientY;
@property (readonly) unsigned int identifier;
@property (readonly) int pageX;
@property (readonly) int pageY;
@property (readonly) int screenX;
@property (readonly) int screenY;
@property (readonly) id<DOMEventTarget> target;

- (void)dealloc;
- (double)force;

@end


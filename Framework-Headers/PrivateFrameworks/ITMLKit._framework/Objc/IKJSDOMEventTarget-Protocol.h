//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMEvent, JSValue, NSString;

@protocol IKJSDOMEventTarget <JSExport>
- (void)addEventListener:(NSString *)arg1:(JSValue *)arg2:(BOOL)arg3;
- (BOOL)dispatchEvent:(IKDOMEvent *)arg1;
- (void)removeEventListener:(NSString *)arg1:(JSValue *)arg2:(BOOL)arg3;
@end

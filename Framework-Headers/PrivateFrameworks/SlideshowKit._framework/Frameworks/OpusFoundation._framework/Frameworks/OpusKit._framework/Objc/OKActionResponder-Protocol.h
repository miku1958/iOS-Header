//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/JSExport-Protocol.h>
#import <OpusKit/OKActionResponderNoExport-Protocol.h>

@class NSString, OKAction;

@protocol OKActionResponder <OKActionResponderNoExport, JSExport>
- (BOOL)sendAction:(OKAction *)arg1 toTarget:(NSString *)arg2;

@optional
- (BOOL)sendAction:(OKAction *)arg1 toTarget:(NSString *)arg2 __JS_EXPORT_AS__sendAction:(id)arg3;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol IKJSDataObservable <JSExport>
- (JSValue *)getPropertyPath:(NSString *)arg1;
- (void)setPropertyPath:(NSString *)arg1:(JSValue *)arg2;
- (void)touchPropertyPath:(NSString *)arg1;
@end

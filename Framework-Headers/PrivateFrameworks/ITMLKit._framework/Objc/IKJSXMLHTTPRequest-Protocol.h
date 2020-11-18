//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, JSValue, NSDictionary, NSNumber, NSString;

@protocol IKJSXMLHTTPRequest <IKJSEventListenerObject, JSExport>

@property (readonly) NSDictionary *metrics;
@property (readonly) unsigned int readyState;
@property (readonly) id response;
@property (readonly) NSString *responseText;
@property (strong) NSString *responseType;
@property (readonly) IKDOMDocument *responseXML;
@property (readonly) unsigned int status;
@property (readonly, strong) NSString *statusText;
@property unsigned long long timeout;

- (void)abort;
- (NSString *)getAllResponseHeaders;
- (NSString *)getResponseHeader:(NSString *)arg1;
- (id)init;
- (void)open:(NSString *)arg1:(NSString *)arg2:(NSNumber *)arg3:(JSValue *)arg4:(JSValue *)arg5;
- (void)send:(JSValue *)arg1;
- (void)setRequestHeader:(NSString *)arg1:(NSString *)arg2;
@end

